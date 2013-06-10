---
layout: page 
---

{% include JB/setup %}

<img class='inset right' src='/files/pic/headpic01.jpg' title='' alt='' width='120px' />
    
<p class='proverb_1'>You can either travel or read,but either your body or soul must be on the way.</p>
<p class='proverb_2'> ------ Roman Holiday </p>

About me
========
* 计算机机专业在读研究生
* linux深度爱好者，Geeker，开源拥护者
* 系统开发程序员，工作语言C、Python，业余时间摆弄Java、php、Mysql
* 热爱摄影，喜欢旅行，经常打羽毛球，偶尔轮滑，每天跑步

About this site
==========
&nbsp;&nbsp;&nbsp;&nbsp;这是我的个人站点，在这里我会分享一些在工作学习中的见解和思想，包括linux使用技巧、编程经验、算法学习、linux内核研究，欢迎大家和我一块讨论学习进步。同时还有一些摄影作品以及生活片段，希望有相同爱好的朋友造访。    
&nbsp;&nbsp;&nbsp;&nbsp;这个网站采用[jekyll](https://github.com/mreid/jekyll/)搭建，存放在[github](https://github.com/)上，我在[Mark Reid](http://mark.reid.name/)源码的基础上进行加工而成，在这里感谢[Mark Reid](http://mark.reid.name/)提供了模板，Thank you ! 

<!----
我是一名计算机专业在读研究生，Linux深度热爱者。喜欢各种花草虫鱼，抓过蚂蚁，养过蛐蛐，买过一盆玉石莲不想被同学残害，喂过两尾金鱼却因忘记换水而暴毙。

I'm Mark Reid, a 30-something Australian, academic, husband, programmer, father, 
snowboarder, and web-nerd---amongst other things. You can find out more about 
be by poking around the links above and below.

+--	{.section}
Research
========
My day job is as a [Research Fellow](/work) in statistical machine learning at 
the Australian National University's Research School of Information Sciences and
Engineering.
=--

+-- {.section}
Blogs
=====
I keep a research blog called _[Inductio ex Machina](/iem)_ on 
machine learning and statistics.
Recent posts include:
{% for post in site.categories.iem limit:3 %}
<ul class="compact recent">
<li>
	<a href="{{ post.url }}" title="{{ post.excerpt }}">{{ post.title }}</a>
	<span class="date">{{ post.date | date_to_string }}</span> 
</li>
</ul>
{% endfor %}
=--

+--{.section}
I have also just started a programming blog called _[Structure & Process](/sap)_.
{% for sappost in site.categories.sap limit:3 %}
<ul class="compact recent">
<li>
	<a href="{{ sappost.url }}" title="{{ sappost.excerpt }}">{{ sappost.title }}</a>
	<span class="date">{{ sappost.date | date_to_string }}</span> 
</li>
</ul>
{% endfor %}
=--

+-- {.section}
[Twitter](http://twitter.com/mdreid)
====================================

Contacting Twitter... 
{:#twitter_update_list }

=--

+-- {.section}
[Reading](http://librarything.com/home/mdreid)
==============================================

<script type="text/javascript" src="http://www.librarything.com/jswidget.php?reporton=mdreid&show=recent&header=&num=8&covers=small&text=title&tag=show&css=0&style=2&version=1"> </script>
=--

---->
