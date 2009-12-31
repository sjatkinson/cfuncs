require 'net/http'
require 'uri'

def in_dir(path)
  old_dir = FileUtils.pwd
  cd(File.expand_path(path))
  yield if block_given?
  cd(old_dir)
end

# TODO: handle error and deeply nested redirects
def download_file(url,new_name=nil)
  target = File.basename(url)
  begin
    open(target,"wb") do |f|
      response = Net::HTTP.get_response(URI.parse(url))
      case response
      when Net::HTTPSuccess
        f.write(response.body)
      when Net::HTTPRedirection
        download_file(response['location'])
      end
    end
    unless new_name.nil?
      mv target,new_name
    end
  rescue Exception => e
    puts "Hey there!!"
    p e
    raise
  rescue Net::HTTPError => e
    puts "got err"
    p e
  rescue Net::HTTPRedirection => r
    puts "got a redirect "
    p r
  rescue Net::HTTPServerException => e
    puts "Could not get #{url} : #{e}"
    puts e.response
  end
  new_name || target
end

def tarball(url)
  begin
    puts "get #{url}"
    cmd = "tar xzf #{download_file(url)}"
    puts cmd
    system(cmd)
  rescue Net::HTTPServerException => e
    puts "Could not get #{url} : #{e}"
    puts e.response
  end
end

task :install do
  url = "http://downloads.sourceforge.net/project/cgreen/cgreen/cgreen_1.0beta2/cgreen-1.0.0-beta2.tar.gz"
  in_dir("~/src") do
    tarball url
  end
end
