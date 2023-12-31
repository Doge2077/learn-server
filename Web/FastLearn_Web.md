

# 因特网概述

****

## 网络、互联网和因特网

****

### 基础概念

****

- 网络：将多个计算机或计算机网络通过通信线路连接起来，使得它们可以相互通信和交换信息的系统。由若干节点（Node）和连接这些节点的链路（Link）组成。节点可以是计算机、集线器、交换机、路由器等。
- 互联网： 多个网络通过路由器互连起来，这样就构成了一个覆盖范围更大的网络，即互联网，因此互联网是**网络的网络**。
- 因特网**：**是世界上最大的互联网络。

![](https://image.itbaima.net/images/40/image-20230629211700312.png)

****

### internet & Internet

****

- 以小写字母 `i` 开始的 `internet`（互连网）是通用名词，它泛指由多个计算机网络互连而成的网络。在这些网络之间的通信协议（即通信规则）可以是任意的。
- 以大写字母 `I` 开始的 `Internet`（互联网）是专用名词，它指当前全球最大的、开放的、由众多网络相互连接而成的特定计算机网络，并采用 `TCP/IP` 协议族作为通信规则，推荐译名为“因特网”。

****

## 互联网的组成

****

![](https://image.itbaima.net/images/40/image-20230629221360973.png)

****

### 边缘部分-ISP

****

互联网边缘部分的ISP（Internet Service Provider，互联网服务提供商）是指提供互联网接入服务的公司或组织。它们连接个人用户、家庭、企业和其他组织到互联网上，使其能够访问和使用互联网资源。

边缘部分的ISP通常提供多种类型的互联网接入服务，包括：

1. 家庭宽带接入：这种服务通过电缆、数字用户线路（DSL）、光纤或无线技术将家庭连接到互联网。家庭宽带接入通常提供高速连接，使用户能够同时进行多种在线活动，如浏览网页、观看流媒体、下载文件等。

2. 移动网络服务：移动网络运营商提供通过移动设备（如智能手机、平板电脑）访问互联网的服务。这些服务使用无线通信技术（如4G、5G）将用户连接到移动网络基站，然后通过互联网将数据传输到目标服务器。

3. 企业级互联网接入：这些服务针对企业和组织，提供更高的带宽和更复杂的网络配置选项。企业级互联网接入通常包括虚拟专用网络（VPN）服务、安全性和可靠性增强的连接选项，以及其他专门为企业需求设计的功能。

边缘部分的ISP在互联网架构中扮演着重要的角色，它们通过与核心部分的ISP和其他边缘部分的ISP建立互联互通，构成了全球互联网的基础。用户通过边缘部分的ISP接入互联网后，可以与其他用户和互联网上的服务进行通信和交互。

****

### 核心部分-三种交换方式

****

1. 电路交换：
   - 发送方和接收方之间建立了一条专用的**物理通路**，该通路在整个通信过程中**一直保持连接**。
   - 发送方在通路上发送数据，而接收方则在通路上接收数据。
   - 在电路交换中，通信双方拥有独占的带宽，通信过程中的数据传输是连续的，并且不受其他用户的影响。传统的电话网络就是一种电路交换的方式。
2. 报文交换：
   - 在报文交换中，发送方将要传输的完整数据包装成报文，然后**一次性发送**给接收方。
   - 接收方在接收到报文后，提取出完整的数据，并进行相应的处理。
   - 在报文交换中，**数据传输过程是离散的**，每次传输都是一条完整的报文。
3. 分组交换：
   - 在分组交换中，发送方**将数据划分为较小的数据包**（分组），并加上目标地址等控制信息后发送给网络。
   - 网络根据目标地址进行路由，将数据包分散地传输到目标节点，最终由目标节点重新组装成完整的数据。
   - 在分组交换中，数据包独立传输，可以通过不同的路径进行传输，提高了网络的利用率和灵活性。互联网就是基于分组交换的网络。

![](https://image.itbaima.net/images/40/image-20230629225497954.png)

****

# 计算机网络的定义和分类

****

## 计算机网络的定义

****

- 没有十分精确的定义。
- 最简单的定义：一些**互相连接**的、**自治**的计算机的**集合**。
  - 互联：计算机之间可以通过有线或者无线的方式进行数据通信。
  - 自治：指独立的计算机，它有自己的硬件和软件，可以单独运行使用。
  - 集合：至少需要两台计算机。
- 精确一些的定义：
  * 计算机网络主要是由一些**通用的、可编程的硬件**互连而成的，而这些硬件并非专门用来实现某一特定目的（例如，传送数据或视频信号)。这些可编程的硬件能够用来**传送多种不同类型的数据**，并能**支持广泛的和日益增长的应用**。
  * 计算机网络可以是局域网（Local Area Network，LAN），广域网（Wide Area Network，WAN），互联网等不同范围和拓扑结构的网络。
- 核心目的：
  * **实现计算机之间的数据传输和资源共享**。

****

## 计算机网络的分类

****

1. 按照规模：
   - 个人区域网络（PAN）：用于个人设备之间的通信，如电脑、手机等。
   - 局域网（LAN）：用于连接位于相对较小地理范围内的设备，如办公室、学校或家庭的网络。
   - 城域网（MAN）：连接位于同一城市范围内的设备，通常由多个LAN组成。
   - 广域网（WAN）：覆盖更大地理范围的网络，可以跨越城市、国家甚至国际边界。

2. 按照连接方式：
   - 点对点网络：两台计算机之间建立直接连接。
   - 广播网络：通过共享媒介，向网络上的所有设备广播信息。
   - 网状网络：每个节点都直接与其他节点相连。
   - 总线网络：所有设备通过一个共享的总线连接。

3. 按照使用场景：
   - 互联网：由多个互联的网络构成，涵盖全球范围，提供广域网级别的连接和通信。
   - 企业网络：用于企业业组织内部的通信和共享资源，如局域网和私有广域网等。
   - 无线网络：使用无线技术实现设备之间的通信，如Wi-Fi、蓝牙等。

4. 按照拓扑结构：
   - 星型网络：所有设备通过一个中央节点（通常是交换机或路由器）连接。
   - 环形网络：设备按照环状排列，每个设备通过两个相邻设备连接。
   - 网状网络：每个节点都直接与其他节点相连。

5. 按照网络协议：
   - 有线网络：使用以太网等有线连接方式进行通信。
   - 无线网络：使用无线技术（如Wi-Fi、蓝牙、LTE等）进行通信。

****

# 计算机网络的性能指标

****

## 常见性能指标

****

1. 速率（Rate）：
   - 数据的传送速率
   - 它也称为数据率 (data rate)或比特率 (bit rate)
2. 带宽（Bandwidth）：
   * 带宽是指网络传输介质能够传输数据的能力，通常以每秒传输的数据量（比特率）来表示。
   * 即**单位时间内从网络中的某一点到另一点所能通过的最高数据率**。
3. 时延（Latency）：
   * 延迟是指数据从发送方到接收方之间的时间延迟，也称为延迟或迟延。
   * 包括：发送时延（数据发送前的准备和封装时间）、传播时延（数据传输所需的时间）、处理时延（数据在接收方重组和处理的时间）和排队时延（分组在进入路由器后在输入队列中排队等待处理的时间）。
4. 吞吐量（Throughput）：
   * 吞吐量是指网络在**单位时间内传输的数据量**。
   * 反映了网络的数据处理能力和传输效率。
5. 丢包率（Packet Loss Rate）：
   * 丢包率是指在数据传输过程中丢失的数据包的比例。
   * 较低的丢包率表示网络的可靠性较高，数据传输较为稳定。
6. 网络延伸性（Scalability）：
   * 网络延展性是指**网络的规模和容量扩展能力**。
   * 一个具有较好网络延展性的网络可以支持更多的用户和设备，并保持良好的性能。
7. 可靠性（Reliability）：
   * 可靠性是指网络运行的稳定性和持续性。
   * 一个可靠的网络能够保证数据的安全传输和传输的正确性。

****

## 数据量及速率

****

### bit & byte

****

> The **bit** is the most basic [unit of information](https://en.wikipedia.org/wiki/Units_of_information) in [computing](https://en.wikipedia.org/wiki/Computing) and digital [communications](https://en.wikipedia.org/wiki/Communication). The name is a [portmanteau](https://en.wikipedia.org/wiki/Portmanteau) of **binary digit**.[[1\]](https://en.wikipedia.org/wiki/Bit#cite_note-Mackenzie_1980-1) The bit represents a [logical state](https://en.wikipedia.org/wiki/Truth_value) with one of two possible [values](https://en.wikipedia.org/wiki/Value_(computer_science)). These values are most commonly represented as either "1" or "0", but other representations such as *true*/*false*, *yes*/*no*, *on*/*off*, or *+*/*−* are also widely used.

$bit$ （比特）就是计算机中对于数据量描述的最小单位了，而 $byte$ （字节）则是由 $8$ 个 $bit$ 组成的，即 $1 byte = 2^3 bit$

一般认为，$b$ 表示 $bit$，而 $B$ 表示 $byte$。

**不同的进制标准**：如果表示 $bit$ 和 $byte$ 的集合，由于不同的标准下制定的进制不一致，导致大众混淆了用法，甚至连教科书里面的内容都不求甚解。

****

### 比特的次方单位

****

<table class="infobox" style="text-align:center; width: 100%">
  <tbody>
    <tr>
      <th colspan="6" style="background-color:#ccf;"><a class="mw-selflink selflink">比特</a>的次方单位</th>
    </tr>

    <tr>
      <td>
        <table class="infobox" style="margin: 0; width: 100%">
          <tbody>
                <tr>
      <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6%E8%AF%8D%E5%A4%B4" title="国际单位制词头">十进制前缀</a><br>(<a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6" title="国际单位制">SI</a>)</th>
      <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E4%BA%8C%E9%80%B2%E4%BD%8D%E5%89%8D%E7%BD%AE%E8%A9%9E" title="二进制前置词">二进制前缀</a><br>(<a href="/wiki/IEC_60027-2" class="mw-redirect" title="IEC 60027-2">IEC 60027-2</a>)</th>
    </tr>
    <tr>
      <th>名字</th>
      <th>缩写</th>
      <th>次方</th>
      <th>名字</th>
      <th>缩写</th>
      <th>次方</th>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/%E5%8D%83%E6%AF%94%E7%89%B9" title="千比特">kilobit</a></td>
      <td>kbit</td>
      <td><a href="/wiki/1000" title="1000">10<sup>3</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Kibibit" title="Kibibit">kibibit</a></td>
      <td>Kibit</td>
      <td><a href="/wiki/1024" title="1024">2<sup>10</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Megabit" title="Megabit">megabit</a></td>
      <td>Mbit</td>
      <td><a href="/wiki/1_E6" class="mw-redirect" title="1 E6">10<sup>6</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Mebibit" title="Mebibit">mebibit</a></td>
      <td>Mibit</td>
      <td><a href="/wiki/1048576" title="1048576">2<sup>20</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Gigabit" title="Gigabit">gigabit</a></td>
      <td>Gbit</td>
      <td><a href="/wiki/1_E9" class="mw-redirect" title="1 E9">10<sup>9</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Gibibit" title="Gibibit">gibibit</a></td>
      <td>Gibit</td>
      <td><a href="/wiki/1073741824" title="1073741824">2<sup>30</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Terabit" title="Terabit">terabit</a></td>
      <td>Tbit</td>
      <td><a href="/wiki/1_E12" class="mw-redirect" title="1 E12">10<sup>12</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Tebibit" title="Tebibit">tebibit</a></td>
      <td>Tibit</td>
      <td><a href="/wiki/1099511627776" title="1099511627776">2<sup>40</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Petabit" title="Petabit">petabit</a></td>
      <td>Pbit</td>
      <td><a href="/wiki/1_E15" class="mw-redirect" title="1 E15">10<sup>15</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Pebibit" title="Pebibit">pebibit</a></td>
      <td>Pibit</td>
      <td><a href="/wiki/1125899906842624" title="1125899906842624">2<sup>50</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Exabit" title="Exabit">exabit</a></td>
      <td>Ebit</td>
      <td><a href="/wiki/1_E18" class="mw-redirect" title="1 E18">10<sup>18</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Exbibit" title="Exbibit">exbibit</a></td>
      <td>Eibit</td>
      <td><a href="/wiki/1152921504606846976" title="1152921504606846976">2<sup>60</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Zettabit" title="Zettabit">zettabit</a></td>
      <td>Zbit</td>
      <td><a href="/wiki/1_E21" class="mw-redirect" title="1 E21">10<sup>21</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Zebibit" title="Zebibit">zebibit</a></td>
      <td>Zibit</td>
      <td><a href="/wiki/1180591620717411303424" title="1180591620717411303424">2<sup>70</sup></a></td>
    </tr>
    <tr>
      <td style="text-align:left;"><a href="/wiki/Yottabit" title="Yottabit">yottabit</a></td>
      <td>Ybit</td>
      <td><a href="/wiki/1_E24" class="mw-redirect" title="1 E24">10<sup>24</sup></a></td>
      <td style="text-align:left;"><a href="/wiki/Yobibit" title="Yobibit">yobibit</a></td>
      <td>Yibit</td>
      <td><a href="/wiki/1208925819614629174706176" title="1208925819614629174706176">2<sup>80</sup></a></td>
    </tr>
          </tbody>
        </table>
      </td>
    </tr>
  </tbody>
</table>

****

### 字节的次方单位

****

<table class="infobox" style="text-align:center; width: 100%">
  <tbody>
    <tr>
      <th colspan="2" style="background-color:#ccf;"><a class="mw-selflink selflink">字节</a>的次方单位</th>
    </tr>
    <tr>
      <td>
        <table class="infobox" style="margin: 0; width: 100%">
          <tbody>
            <tr>
              <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6%E8%AF%8D%E5%A4%B4" title="国际单位制词头">十进制前缀</a><br>(<a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6" title="国际单位制">SI</a>)</th>
              <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E4%BA%8C%E9%80%B2%E4%BD%8D%E5%89%8D%E7%BD%AE%E8%A9%9E" title="二进制前置词">二进制前缀</a><br>(<a href="/wiki/IEC_60027-2" class="mw-redirect" title="IEC 60027-2">IEC 60027-2</a>)</th>
            </tr>
            <tr>
              <th style="background-color:#ddf">名字</th>
              <th style="background-color:#ddf">缩写</th>
              <th style="background-color:#ddf">次方</th>
              <th style="background-color:#ddf">名字</th>
              <th style="background-color:#ddf">缩写</th>
              <th style="background-color:#ddf">次方</th>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E5%8D%83%E5%AD%97%E8%8A%82" title="千字节">千字节</a></td>
              <td>KB</td>
              <td><a href="/wiki/1_E3" class="mw-redirect" title="1 E3">10<sup>3</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Kibibyte" title="Kibibyte">kibibyte</a></td>
              <td>KiB</td>
              <td>2<sup>10</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E7%99%BE%E8%90%AC%E4%BD%8D%E5%85%83%E7%B5%84" title="兆字节">兆字节</a></td>
              <td>MB</td>
              <td><a href="/wiki/1_E6" class="mw-redirect" title="1 E6">10<sup>6</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Mebibyte" title="Mebibyte">mebibyte</a></td>
              <td>MiB</td>
              <td>2<sup>20</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E5%90%89%E5%AD%97%E8%8A%82" title="吉字节">吉字节</a></td>
              <td>GB</td>
              <td><a href="/wiki/1_E9" class="mw-redirect" title="1 E9">10<sup>9</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Gibibyte" title="Gibibyte">gibibyte</a></td>
              <td>GiB</td>
              <td>2<sup>30</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E5%A4%AA%E5%AD%97%E8%8A%82" title="太字节">太字节</a></td>
              <td>TB</td>
              <td><a href="/wiki/1_E12" class="mw-redirect" title="1 E12">10<sup>12</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Tebibyte" title="Tebibyte">tebibyte</a></td>
              <td>TiB</td>
              <td>2<sup>40</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E6%8B%8D%E5%AD%97%E8%8A%82" title="拍字节">拍字节</a></td>
              <td>PB</td>
              <td><a href="/wiki/1_E15" class="mw-redirect" title="1 E15">10<sup>15</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Pebibyte" title="Pebibyte">pebibyte</a></td>
              <td>PiB</td>
              <td>2<sup>50</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E8%89%BE%E5%AD%97%E8%8A%82" title="艾字节">艾字节</a></td>
              <td>EB</td>
              <td><a href="/wiki/1_E18" class="mw-redirect" title="1 E18">10<sup>18</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Exbibyte" title="Exbibyte">exbibyte</a></td>
              <td>EiB</td>
              <td>2<sup>60</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;"><a href="/wiki/%E6%B3%BD%E5%AD%97%E8%8A%82" title="泽字节">泽字节</a></td>
              <td>ZB</td>
              <td><a href="/wiki/1_E21" class="mw-redirect" title="1 E21">10<sup>21</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Zebibyte" title="Zebibyte">zebibyte</a></td>
              <td>ZiB</td>
              <td>2<sup>70</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;">尧字节</td>
              <td>YB</td>
              <td><a href="/wiki/1_E24" class="mw-redirect" title="1 E24">10<sup>24</sup></a></td>
              <td style="text-align:left;"><a href="/wiki/Yobibyte" title="Yobibyte">yobibyte</a></td>
              <td>YiB</td>
              <td>2<sup>80</sup></td>
            </tr>
            <tr>
              <td style="text-align:left;">容字节</td>
              <td>RB</td>
              <td><a href="/wiki/1_E27" class="mw-redirect" title="1 E27">10<sup>27</sup></a></td>
              <td></td>
              <td></td>
              <td></td>
            </tr>
            <tr>
              <td style="text-align:left;">昆字节</td>
              <td>QB</td>
              <td><a href="/wiki/1_E30" class="mw-redirect" title="1 E30">10<sup>30</sup></a></td>
              <td></td>
              <td></td>
              <td></td>
            </tr>
          </tbody>
        </table>
      </td>
    </tr>
  </tbody>
</table>

****

### 比特率的换算关系

****

<table class="infobox" style="text-align:center; width: 100%">
  <tbody>
    <tr>
      <th colspan="3" style="background-color:#ccf;"><a href="/wiki/%E6%AF%94%E7%89%B9%E7%8E%87"title="比特率">比特率</a></th>
    </tr>
    <tr>
      <td>
        <table class="infobox" style="margin: 0; width: 100%">
          <tbody>
            <tr>
              <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6%E8%AF%8D%E5%A4%B4" title="国际单位制词头">十进制前缀</a><br>(<a href="/wiki/%E5%9B%BD%E9%99%85%E5%8D%95%E4%BD%8D%E5%88%B6" title="国际单位制">SI</a>)</th>
              <th colspan="3" style="background-color:#ddf;"><a href="/wiki/%E4%BA%8C%E9%80%B2%E4%BD%8D%E5%89%8D%E7%BD%AE%E8%A9%9E" title="二进制前置词">二进制前缀</a><br>(<a href="/wiki/IEC_60027-2" class="mw-redirect" title="IEC 60027-2">IEC 60027-2</a>)</th>
            </tr>
            <tr>
              <th style="background-color:#ddf">名称</th>
              <th style="background-color:#ddf">符号</th>
              <th style="background-color:#ddf">次方</th>
              <th style="background-color:#ddf">名称</th>
              <th style="background-color:#ddf">符号</th>
              <th style="background-color:#ddf">次方</th>
            </tr>
            <tr>
              <td style="text-align:center;"><a href="/wiki/Kilobit_per_second" class="mw-redirect" title="Kilobit per second">千比特每秒（kbps）</a></td>
              <td style="text-align:left;">kbit/s</td>
              <td><a href="/wiki/1000" title="1000">10<sup>3</sup></a></td>
              <td style="text-align:center;"><a href="/w/index.php?title=Kibibit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Kibibit per second（页面不存在）">二进制千比特每秒（Kibps）</a></td>
              <td>Kibit/s</td>
              <td>2<sup>10</sup></td>
            </tr>
            <tr>
              <td style="text-align:center;"><a href="/w/index.php?title=Megabit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Megabit per second（页面不存在）">兆比特每秒（Mbps）</a></td>
              <td style="text-align:left;">Mbit/s</td>
              <td><a href="/wiki/1_E6" class="mw-redirect" title="1 E6">10<sup>6</sup></a></td>
              <td style="text-align:center;"><a href="/w/index.php?title=Mebibit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Mebibit per second（页面不存在）">二进制兆比特每秒（Mibps）</a></td>
              <td>Mibit/s</td>
              <td>2<sup>20</sup></td>
            </tr>
            <tr>
              <td style="text-align:center;"><a href="/w/index.php?title=Gigabit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Gigabit per second（页面不存在）">吉比特每秒（Gbps）</a></td>
              <td style="text-align:left;">Gbit/s</td>
              <td><a href="/wiki/1_E9" class="mw-redirect" title="1 E9">10<sup>9</sup></a></td>
              <td style="text-align:center;"><a href="/w/index.php?title=Gibibit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Gibibit per second（页面不存在）">二进制吉比特每秒（Gibps）</a></td>
              <td>Gibit/s</td>
              <td>2<sup>30</sup></td>
            </tr>
            <tr>
              <td style="text-align:center;"><a href="/w/index.php?title=Terabit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Terabit per second（页面不存在）">太比特每秒（Tbps）</a></td>
              <td style="text-align:left;">Tbit/s</td>
              <td><a href="/wiki/1_E12" class="mw-redirect" title="1 E12">10<sup>12</sup></a></td>
              <td style="text-align:center;"><a href="/w/index.php?title=Tebibit_per_second&amp;action=edit&amp;redlink=1" class="new" title="Tebibit per second（页面不存在）">二进制太比特每秒（Tibps）</a></td>
              <td>Tibit/s</td>
              <td>2<sup>40</sup></td>
            </tr>
          </tbody>
        </table>
      </td>
    </tr>
  </tbody>
</table>

**例如**：

- 对于一个 $1.5MB$ 的数据包，其包含的数据量为 $1.5 \times 2^{20} \times 8bit$
- 若数据率为 $2 Mb/s$，则传输所需时间为 $1.5 \times 2^{20} \times 8 bit \div 2 \times 10^6 bit/s = 6.291456  s$

****

# 计算机网络体系结构

****

## 常见的计算机网络体系结构

****

计算机网络的体系结构：

* 指计算机网络的结构和组织方式，描述了网络中各个层次的协议和功能，以及它们之间的关系。

常见的计算机网络体系结构有两种：

* OSI（Open System Interconnection）参考模型：
  * 由国际标准化组织（ISO）在20世纪70年代提出。
  * 它分为七个层次（从下到上依次为物理层、数据链路层、网络层、传输层、会话层、表示层、应用层），每个层次都有相应的协议和功能，并且每个层次的协议只与相邻的上下两层进行通信。
* TCP/IP（Transmission Control Protocol/Internet Protocol）体系结构：
  * 最初用于互联网的体系结构。
  * 它分为四个层次（从下到上依次为网络接口层、网际层、传输层、应用层），每个层次都有相应的协议和功能，而且各层之间的交互性较强，上层可以直接调用下层的服务。

![](https://image.itbaima.net/images/40/image-20230630009753124.png)

****

## 计算机网络体系结构分层思想举例

****

![](https://image.itbaima.net/images/40/image-20230630003414073.png)

****

# 计算机网络传输的过程

****

总结思考，内容参考自：

- [小林coding](https://www.xiaolincoding.com/network/1_base/tcp_ip_model.html#%E5%BA%94%E7%94%A8%E5%B1%82)
- [菜鸟教程-计算机网络基础知识总结](https://www.runoob.com/w3cnote/summary-of-network.html)

****

## 应用层

****

- **应用层**（*Application Layer*）：应用层处于最上层，也是我们能直接接触到的。
- 当两个不同设备的应用需要通信的时候，应用层就把应用数据传给下一层（传输层）。
- 应用层是工作在操作系统中的用户态，传输层及以下则工作在内核态。

****

## 传输层

****

- **传输层**（*Transport Layer*）：也就是上文的运输层，应用层的数据包会传给传输层，**为应用层提供网络支持**。
- 常用协议：
  * TCP：全称传输控制协议（*Transmission Control Protocol*），大部分应用使用的正是 TCP 传输层协议，比如 HTTP 应用层协议。具有流量控制、超时重传、拥塞控制等特性，以保证数据包能可靠地传输给对方。
  * UDP：全称用户数据报协议（*User Datagram Protocol*），只负责发送数据包，不保证数据包是否能抵达对方，但它实时性相对更好，传输效率也高。
- 在 TCP 协议中，我们把每个分块称为一个 **TCP 段**（*TCP Segment*），当设备作为接收方时，传输层则要负责把数据包传给应用，但是一台设备上可能会有很多应用在接收或者传输数据，因此需要用一个编号将应用区分开来，这个编号就是**端口**（*Port*）。
- 传输层的报文中会携带端口号，因此接收方可以识别出该报文是发送给哪个应用。

**注意**：

* 传输层关注数据的可靠传输和流量控制，并不负责实际的传输。

****

## 网络层

****

* **网络层**（*Internet Layer*）:实际的传输功能层，网络层通过网络层协议（如IP协议）将数据包（也称为数据报）从源主机传输到目的主机。
* 网络层传输数据的步骤：
  * 数据分段：如果数据报的大小超过了网络的最大传输单元（MTU），网络层会将数据报分割成适合传输的小块，每个小块称为数据段。
  * IP地址寻址：网络层在数据报的头部添加源IP地址和目的IP地址。源IP地址是发送方主机的唯一标识符，目的IP地址是接收方主机的标识符，用于确定数据报的源和目的地。
  * 路由选择：网络层根据目的IP地址和路由表中的路由信息，选择合适的路径将数据报从源主机传输到目的主机。路由选择涉及到路由选择算法和路由器之间的通信。
  * 数据报转发：根据路由选择的结果，数据报会通过一系列的路由器进行转发，每个路由器都根据目的IP地址查找下一跳的路由。
  * 数据封装：每个路由器在转发数据报时，会将数据报封装在新的数据帧中，添加物理层的帧头和帧尾，以便在物理层上进行传输。
  * 数据传输：转发的数据帧通过物理层进行传输，经过网线、光纤、无线信道等传输媒介传送。
  * 数据解封装：目的主机接收到数据帧后，会将其解封装，并提取出数据报。
  * 数据重组：如果数据报被分段传输，目的主机需要将分段的数据报重组成完整的数据。
  * 数据交付：目的主机将数据交付给上层的应用程序，完成数据的传输过程。

****

## 网络接口层

****

* **网络接口层**（*Link Layer*）：负责处理网络接口的硬件和软件操作，以便将数据在物理介质上传输。
* 其主要功能包括：
  * 帧封装：将网络层传来的IP数据报封装成数据帧，在数据帧的头部添加控制信息（如源和目的MAC地址、帧类型）。
  * 媒体访问控制（MAC）：通过MAC协议控制对共享的物理介质（如以太网、无线局域网）的访问，以避免冲突和碰撞。
  * 数据帧的传输和接收：网络接口层负责将数据帧发送到物理介质上进行传输，或者从物理介质上接收到数据帧。
  * 错误检测和纠正：网络接口层负责检测数据帧在传输过程中可能出现的错误，并进行纠正。常用的纠错机制包括循环冗余检测（CRC）。
  * 数据链路控制：网络接口层确保数据帧的可靠传输，通过帧的确认和重传机制，检测丢失或损坏的数据帧，并进行相应的重传。
  * 物理地址（MAC地址）解析：网络接口层使用物理地址（也称为MAC地址）来唯一标识网络接口，将数据帧从一个网络接口传输到另一个网络接口。
  * 路由器和交换机接口：网络接口层实现与路由器和交换机之间的接口，将数据帧从本地网络发送到其他网络。

****

# 计算机体系专业术语解释

****

## 域名

****

域名是用于标识和定位互联网上资源的名称。例如：`lys2021.com`

简单来说，**域名是一个网站的地址**，通过域名可以方便地访问特定的网站或资源。

域名可以按照其在域名系统中的位置进行分类，分为以下几个级别：

- 顶级域名（Top-Level Domain，TLD）：顶级域名是最高级别的域名分类，在域名的最右侧，通常由几个字母组成。顶级域名又可以分为两类：
  * 通用顶级域名（Generic Top-Level Domain，gTLD）：包括常见的.com、.net、.org等，用于表示域名的分类或用途。
  * 国家顶级域名（Country Code Top-Level Domain，ccTLD）：由国家或地区使用的域名后缀，例如.cn代表中国、.jp代表日本等，用于表示域名的国家或地区。
- 二级域名（Second-Level Domain，SLD）：位于顶级域名之下，是根据注册者的选择而自定义的域名部分。
  * 例如，在 `lys2021.com` 中，"lys2021"就是第二级域名。
- 子域名（Subdomain）：位于第二级域名之下，可以进一步细分为多个层级。
  * 例如，在lys2021.com主域名下，可以创建如下子域名： `game.lys2021.com`、`blog.lys2021.com`。

**什么是www**：

* "www"是一个常见的子域名前缀，常用于表示网络上的世界广域网（World Wide Web）服务。它通常用于标识网站的主要访问地址，作为网站的默认前缀。大多数网站在URL中都会以"www"作为子域名的一部分。

****

## DNS

****

DNS（域名系统）是一种网络协议，其主要作用是将域名转换为对应的IP地址。

* DNS充当了互联网上的一个电话簿，**用户可以通过输入网址（域名）来访问特定的网站，而不需要记住网站的IP地址。**
* 当用户输入一个域名时，计算机会发送一个DNS查询请求到DNS服务器，DNS服务器会返回与该域名对应的IP地址，然后计算机根据该IP地址与服务器建立连接，并将用户指向正确的网站。

DNS 中的域名都是用**句点**来分隔的，比如 `lys2021.com`，这里的句点代表了不同层次之间的**界限**。

* 在域名中，**越靠右**的位置表示其层级**越高**。
* 实际上的域名最后还有一个点，比如 `lys2021.com.`，这个最后的一个点代表根域名。
* 也就是，`.` 根域是在最顶层，它的下一层就是 `.com` 顶级域，再下面是 `lys2021.com`。

域名的层级关系类似一个树状结构：

- 根 DNS 服务器（.）
- 顶级域 DNS 服务器（.com）
- 权威 DNS 服务器（lys2021.com）

**DNS的解析过程**：

![](https://image.itbaima.net/images/40/image-20230701149996828.jpeg)

**什么是CDN**：

* CDN（内容分发网络）是一种通过分布在全球范围的服务器来提供高速、可靠和安全内容传输的网络架构。CDN的目标是通过将内容存储在靠近用户的边缘服务器上，以降低网络延迟和提高内容传输速度，从而改善用户的访问体验。
* CDN的工作原理是在全球各个地点设置多个边缘节点服务器，这些服务器存储了静态内容（例如网页、图像、视频等）。当用户向CDN请求内容时，CDN会根据用户的位置，将内容从最接近用户的边缘节点服务器上提供，而不是从原始服务器上提供。这样可以有效地减少用户请求的跳跃次数，减少网络延迟，提高响应速度和带宽利用率。

**CDN什么时候工作**：

* 前提是该网站部署了CDN服务。
* DNS解析并与服务器建立连接后，当当用户发起对特定内容的请求时，CDN才会根据用户的位置和网络环境，将请求路由到最近的边缘节点服务器上。
* 在用户请求的内容没有缓存或已过期时。当用户请求的内容（例如图像、视频、网页等）不在边缘节点服务器的缓存中，或者已经过了缓存的有效期，CDN会将请求转发到原始服务器上获取最新的内容，然后将内容缓存到边缘节点服务器上以便后续请求时使用。

****

## HTTP

****

HTTP是超文本传输协议（Hypertext Transfer Protocol）的缩写。

* 它是一种用于在计算机网络中传输超文本和多媒体文件的**应用层协议**。
* HTTP协议是Web应用中最常用的一种协议，它建立在TCP/IP协议之上，通过使用客户端-服务器模型来进行通信。

在HTTP中，客户端发送HTTP请求，服务器则返回HTTP响应，实现了客户端和服务器之间的通信和数据交换。

* HTTP协议是一种无状态的协议，每个请求和响应之间都是独立的。

**什么时候生成HTTP请求**：

* 用户在浏览器输入域名后，浏览器对 `URL` 进行解析之后，确定了 `Web` 服务器和文件名，然后根据这些信息来生成 HTTP 请求消息。

**HTTP请求如何发送**：

* 通过浏览器解析 `URL` 并生成 `HTTP` 消息后，需要委托操作系统将消息发送给 `Web` 服务器。
* 但在发送之前，需要**查询服务器域名对应的 IP 地址**，因为委托操作系统发送消息时，必须提供通信对象的 IP 地址。
* 故需要先交给 `DNS` 进行解析。

**传输数据需要什么条件**：

* HTTP 是基于 TCP 协议传输的，在 HTTP 传输数据之前，首先需要 TCP 建立连接，TCP 连接的建立，通常称为**三次握手**。
* 三次握手目的是**保证双方都有发送和接收的能力**。

**什么是无状态**：

* "无状态"指的是在网络通信过程中，服务器不会保存客户端的任何信息或状态。
* 每个请求和响应都是相互独立的，服务器不会记住之前的请求或者与之前请求的关联。这意味着每个请求都需要提供足够的信息来使服务器理解和处理请求，而服务器返回的响应也只包含当前请求所需的数据和状态。
* 由于无状态的特性，服务器的负载较轻，更容易实现可伸缩性和可靠性。
* 为了实现会话和状态管理，例如保存用户登录状态，通常会使用会话管理技术（如使用Cookie或令牌）来存储和传递客户端的状态信息。

**什么是Cookie**：

* Cookie是一种在客户端存储数据的小型文本文件。
* 它由Web服务器发送给客户端（通常是浏览器），然后由客户端保存在本地。当客户端发送后续请求时，会在请求中携带这些Cookie，以便服务器可以识别和跟踪客户端。
* 使用Cookie的主要优势是它可以在不同的请求之间保持会话状态。通过将会话ID等信息存储在Cookie中，服务器可以跟踪用户的操作和状态，实现用户的认证和个性化体验。
* 然而，Cookie也有一些安全和隐私方面的考虑，因此需要注意对敏感信息的处理和保护，并在必要时进行加密和安全措施。

****

## HTTPS

****

HTTPS是超文本传输安全协议（Hypertext Transfer Protocol Secure）的缩写：

* 是一种通过加密和认证来保护网络通信安全的协议。
* 它是基于HTTP协议的加密版本，其目的是在用户和网站之间建立安全的通信渠道，防止数据被窃取、篡改或伪造。

HTTPS通过使用SSL（安全套接层）或TLS（传输层安全）协议对传输的数据进行加密：

* 这意味着在数据传输过程中，第三方无法直接截取或读取数据的内容。

同时，HTTPS还使用证书来验证网站的身份：

* 当用户访问一个使用HTTPS的网站时，浏览器会检查网站的证书，以确保用户连接到的是经过验证和信任的网站。

**HTTPS工作原理是什么**：

* HTTPS的工作原理是在HTTP通信基础上添加了SSL/TLS握手过程和加密算法。
* 当用户访问一个HTTPS网站时，浏览器会与网站的服务器进行握手，交换加密算法和密钥，然后使用密钥对数据进行加密和解密。
* 这样，即使数据在传输过程中被截获，也无法被解密，从而保护了数据的机密性和完整性。

****

## SSL

****

SSL（Secure Sockets Layer）是一种用于保护网络通信安全的加密协议，它用于在客户端和服务器之间建立安全的连接。它是一种建立在传输层（Transport Layer）之上的安全协议，主要用于保护敏感数据在网络传输过程中的安全性。

SSL通过使用公钥加密、对称加密和消息摘要等技术，实现了数据的加密、完整性保护和身份验证。它利用数字证书来验证服务器的身份，并为双方交换密钥、加密和解密数据提供了安全的手段。

**SSL协议的工作原理是什么**：

* 客户端向服务器发送SSL连接请求，并提供自己支持的加密算法和协议版本。
* 服务器通过数字证书来验证自己的身份，并向客户端发送公钥。
* 客户端验证服务器证书的有效性，并生成一个随机的对称加密密钥，并使用服务器的公钥进行加密。
* 服务器收到加密的对称密钥后，使用自己的私钥进行解密，并与客户端协商使用的对称算法和密钥。
* 客户端和服务器之间建立了一个安全的连接，可以使用对称密钥进行加密和解密数据传输。

**什么是SSL证书**：

* SSL证书（Secure Sockets Layer Certificate），也称为TLS证书（Transport Layer Security Certificate），是用于验证网站身份和建立安全连接的数字证书。
* SSL证书的安全性依赖于证书颁发机构的可信度和是否经过正确配置。浏览器和操作系统内置了许多受信任的证书颁发机构的根证书，以便用户在连接有SSL证书的网站时进行验证。如果证书有效且由受信任的机构颁发，浏览器会显示一个锁形状或绿色地址栏，表示连接是安全的。

**什么是TLS**：

* SSL协议后来演化为TLS（Transport Layer Security）协议，为了与时俱进并提供更强大的安全性。因此，现在常见的HTTPS通信实际上是使用TLS来加密保护数据传输。

****

## IP

****

### IP 划分方式

****

**为什么要划分IP**：

* 地址分配：合理划分IP地址可以有效地分配给各个网络和主机，确保每个网络和主机都有足够的IP地址可用，并且避免了地址冲突问题。
* 路由和转发：划分IP地址可以帮助路由器和网络设备更有效地进行路由和数据包转发。根据不同的网络划分，路由器可以根据目标IP地址的网络部分决定转发数据包到相应的网络接口，提高网络性能。

**怎么划分IP**：

* 将 IP 划分为网络号和主机号。
* 可以更有效地将 IP 地址分配给不同的网络和主机，并实现路由和转发的目的。
* 这种划分也有助于进行网络分段、安全性控制和 IP 地址管理。

****

#### 利用子网掩码划分

****

* 地址类别划分方式：
  * 根据IP地址的类别（A、B、C类）来划分子网掩码。
  * 例如，A类地址默认的子网掩码是255.0.0.0，B类地址默认的子网掩码是255.255.0.0，C类地址默认的子网掩码是255.255.255.0。

* 无类别域间路由（CIDR）划分方式：
  * 通过在IP地址后面加上斜线和一个数字（如192.168.0.0/24），数字表示子网掩码中连续的1的个数，即网络部分的长度。
  * 这种方式可以根据具体需求对IP地址进行更灵活的划分。

****

#### 其他划分方式

****

* VLAN划分：
  * VLAN（Virtual Local Area Network）是一种逻辑上的划分方式，可以将一个物理局域网划分成多个虚拟局域网。
  * VLAN可以根据不同的需求和安全策略划分，不受IP地址或子网掩码限制。

* VRF（Virtual Routing and Forwarding）划分：
  * VRF是在路由器上虚拟出多个路由实例，每个实例都具有独立的路由表和转发表。
  * 通过VRF划分，可以将一个物理网络划分成多个逻辑网络，每个逻辑网络拥有独立的路由环境。

* 虚拟化划分：
  * 虚拟化技术可以将一个物理服务器划分为多个虚拟机，每个虚拟机有独立的操作系统、网络和资源。
  * 通过虚拟化，可以将一个物理网络划分成多个逻辑网络，并且可以根据需求进行灵活的调整和管理。

****

### 共有IP&私有IP

****

**为什么要将IP分为公有IP和私有IP**：

* IP地址资源限制：
  * IPv4的地址空间有限，只有约42亿个地址可用。
  * 公有IP地址是有限的，必须被合理分配给互联网上的组织和机构。
  * 而私有IP地址是为内部使用而保留的，可以在组织内部自由分配而无需向互联网注册或付费。
* 网络安全：
  * 使用私有IP地址可以提高网络的安全性。
  * 私有IP地址只能在特定的私有网络内部使用，无法直接从互联网访问。
  * 这为网络提供了一层保护，可以有效防止未经授权的外部访问和攻击。
* 子网划分：
  * 私有IP地址可以允许在内部网络中进行更灵活的子网划分。
  * 组织可以根据自身的需求和拓扑结构，自由划分子网来满足实际的网络连接和管理要求，而无需向任何外部机构申请额外的IP地址。

****

#### 区分共有IP和私有IP

****

![](https://image.itbaima.net/images/40/image-20230702193473581.jpeg)

平时我们办公室、家里、学校用的 IP 地址，一般都是私有 IP 地址。因为这些地址允许组织内部的 IT 人员自己管理、自己分配，而且可以重复。因此，你学校的某个私有 IP 地址和我学校的可以是一样的。

****

### NAT

****

**什么是NAT**：

* 网络地址转换（Network Address Translation，NAT）
* 将在一个网络中使用的IP地址转换为另一个网络中使用的IP地址。
* NAT技术的主要目的是解决IPv4地址枯竭的问题，同时也可以提供网络安全和灵活性。

**由什么负责转换**：

* NAT技术通常在路由器上被实现，它操作在网络层（OSI模型的第三层），以转换IPv4地址。
* 它将源IP地址和端口、目标IP地址和端口组合起来，创建一个映射表，将内部网络的私有IP地址和端口映射到外部网络中的公有IP地址和端口。

**NAT有什么用**：

* IP地址转换：
  * NAT技术实现了将私有IP地址（例如192.168.x.x）转换为公有IP地址。
  * 内部网络的设备可以通过共享一个公有IP地址与外部网络进行通信，而无需为每个设备都分配一个公有IP地址。
* 端口转换：
  * NAT技术还可以通过端口映射将内部网络的设备和服务映射到外部网络的不同端口上。
  * 可以在一个公有IP地址上提供多个服务（如Web服务器、FTP服务器等），而无需为每个服务分配独立的公有IP地址。
* 动态地址分配：
  * 使用NAT技术，路由器可以为内部网络上的设备自动分配临时的公有IP地址。
  * 这种方式称为动态NAT，可以降低公有IP地址的消耗和管理的复杂性。

****

#### NAT穿透

****

内网穿透（NAT穿透）是一种网络技术，用于将位于私有网络（内网）中的服务器或应用程序通过公共网络（例如互联网）访问。

通常情况下，**私有网络中的设备无法直接从外部网络访问**，因为私有网络使用的是非公有IP地址，同时还可能存在防火墙和路由器等网络设备的限制。

内网穿透技术通过一些特殊的技术手段，实现了将私有网络中的服务映射到公共网络上，使得外部网络可以访问和使用这些服务。它涉及到两个主要组成部分：内部端点（位于私有网络中）和外部端点（位于公共网络中）。

**内网穿透的工作原理**:

* 通常是通过在内部网络中的设备上部署一个中间代理（如反向代理或VPN服务），该代理在公共网络上创建一个通道，将外部网络的请求转发到内部网络中的目标设备。
* 这样，无论在哪里，用户都可以使用公共网络连接到内部网络的服务。

**内网穿透的应用情景**：

- 远程访问企业内部的服务器或应用程序。
- 在开发和测试环境中，从外部网络访问内部的测试服务器。
- 在家庭网络中，访问位于家庭网络设备上的文件或媒体。

一些常见的内网穿透工具和协议包括：ngrok、frp、SSH反向隧道、VPN等。这些工具和协议提供了不同的功能和配置选项，以满足不同的内网穿透需求。

****

#### VPN

****

VPN，全称为（*Virtual Private Network*），即虚拟私人网络，是一种通过公共网络（如互联网）建立私密和加密连接的技术：

* VPN通过在通信的两个节点（例如用户设备和企业网络）之间创建了一个加密隧道，使得通过公共网络传输的数据能够安全、私密地传输。

**VPN能做什么**：

* 绕过地理限制：
  * VPN可以通过连接到位于其他国家或地区的服务器，使用户在浏览网站或使用在线服务时获得该地区的IP地址。
  * 这可以让用户绕过地理限制，访问被屏蔽或限制的内容、网站或服务。
* 远程访问：
  * 企业可以使用VPN技术为员工提供远程访问公司内部网络的权限。员工可以通过VPN连接到公司的网络，访问内部资源和应用程序，而无需身处办公室。
* 匿名上网：
  * 通过VPN连接到远程服务器，用户可以以服务器所在地区的IP地址进行上网，从而隐藏自己的真实IP地址，实现匿名上网。

VPN可以通过多种协议实现，如IPSec、OpenVPN、PPTP、L2TP等。用户可以通过在计算机、智能手机或其他设备上安装VPN客户端来连接到VPN服务器，建立安全的连接。同时，许多公司和服务提供商也提供VPN服务，供用户选择和使用。

****

### ICMP

****

ICMP（Internet Control Message Protocol）是互联网控制消息协议的缩写。

* 它是一种网络协议，用于在IP网络上传输控制信息和错误报告。
* ICMP通常在IP数据包的头部中承载了控制信息和错误报告，这些信息和报告可以帮助网络设备诊断和解决各种网络通信问题。

**ICMP有什么用**：

* 错误报告：当数据包在传输过程中发生错误时，ICMP会生成一个错误报告，例如目标不可达、超时等。
* 探测和诊断：ICMP也可以用于网络设备之间的通信探测和诊断，以确定网络连接的可用性和状态，例如通过Ping命令发送ICMP Echo请求以测试主机的可达性。
* 路由信息：ICMP还可用于传输路由信息，例如路由器可以通过ICMP重定向消息通知发送方更好的路径选择。

****

#### 常见的ICMP报文

****

ICMP报文类型是ICMP协议中定义的不同类型的消息，用于在网络中进行控制和错误报告：

1. Echo Request / Echo Reply（类型 8 / 类型 0）：用于进行网络连通性测试，常见的Ping命令就使用了ICMP的Echo报文类型。

2. Destination Unreachable（类型 3）：用于指示数据包无法到达目的地主机，可能的原因包括目的地端口不可达、网络不可达、主机不可达等。

3. Source Quench（类型 4）：用于告知发送方要降低发送速率，以避免网络拥塞。

4. Redirect（类型 5）：用于通知发送方使用更优的路由，以改进数据包的转发路径。

5. Time Exceeded（类型 11）：用于指示数据包的生存时间（TTL）已过期，通常在路由循环或传输延迟过高时出现。

6. Parameter Problem（类型 12）：用于指示数据包中的某些参数错误，例如IP头部长度不正确等。

7. Timestamp Request / Timestamp Reply（类型 13 / 类型 14）：用于提供时间戳信息，用于网络诊断和同步。

8. Address Mask Request / Address Mask Reply（类型 17 / 类型 18）：用于请求或回复子网掩码信息，用于子网地址的配置。

这只是一部分常见的ICMP报文类型，ICMP还有其他一些类型用于不同的控制和错误报告目的。每个报文类型都有其特定的用途和格式。

****

#### Ping

****

**Ping是什么**：

*  命令一般格式：`ping <目标IP或域名>`
* Ping命令是一个常用的网络工具，可在命令行界面中使用，用于测试网络设备的可达性和网络连接的延迟。
* 它使用了ICMP协议的Echo请求和Echo回复报文。

**Ping是怎么工作的**：

* 执行Ping命令后，系统会发送一个ICMP Echo请求数据包到目标主机，并等待目标主机回复一个ICMP Echo回复数据包。
* Ping命令会显示每个数据包的往返时间（RTT）和丢包的百分比（如果有丢包）。通过观察Ping的结果，可以判断目标主机的可达性和网络连接的质量。

例如：

![](https://image.itbaima.net/images/40/image-20230703008172795.png)

****

#### 127.0.0.1&localhost

****

**什么是127.0.0.1**：

* 127.0.0.1是本地回环地址（loopback address），也被称为本地主机地址。它是IP地址中的一个特殊地址，用于指示本地主机或本机自身。是IPv4地址范围中的一部分。
* 当计算机上的应用程序尝试连接该地址时，数据包并不经过网络传输，而是直接被发送到本地网络接口上进行处理。因此，127.0.0.1被用于本地主机的自我测试和回环检测。
* 通常情况下，当在本机上访问某个网络服务时，可以将目标地址设置为127.0.0.1，这样应用程序会将请求发送到本地主机进行处理，从而实现本地服务的测试和调试。

**什么是localhost**

* localhost是一个特殊的主机名（hostname），用于表示本地主机或本机自身。它的含义与IP地址127.0.0.1相同，都指示本地回环地址。在网络协议中，localhost常被用于本地主机的测试和回环检测。
* 与127.0.0.1相比，localhost更像是一个符号名称，是网络通信中的一个别名。一般情况下，localhost会解析为IP地址127.0.0.1。这意味着，当应用程序尝试连接到localhost时，实际上是连接到本地主机的回环地址，实现了本地主机的自我测试和回环检测。

**两者的区别是什么**：

* 格式：
  * 127.0.0.1是一个具体的IP地址，是IPv4地址空间中的一部分；
  * 而localhost是一个主机名，是用来代表本地主机的符号名称。
* 使用场景：
  * 127.0.0.1在应用程序或操作系统中的网络设置中常用，特别在测试和调试本地网络服务时；
  * 而localhost在一些应用程序或配置文件中使用更普遍，在访问本地服务或指定服务器时使用。

****

先来ping一下127.0.0.1：

![](https://image.itbaima.net/images/40/image-2023070300232550.png)

再来ping一下localhost：

![](https://image.itbaima.net/images/40/image-20230703008476636.png)

**总结**：

- `127.0.0.1` 是**回环地址**。`localhost`是**域名**，默认等于 `127.0.0.1`。
- 大多数情况下，localhost会解析为IP地址127.0.0.1，但是也可能有例外情况，例如在某些网络环境或配置中，localhost可能会设置为其他IP地址。但无论如何，localhost的作用是表示本地主机或本机自身，用于在本地进行网络连接和回环测试。



