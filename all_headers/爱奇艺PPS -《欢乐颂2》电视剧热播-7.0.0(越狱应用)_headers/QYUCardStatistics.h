//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, QYUCardStatisticsControl;

@interface QYUCardStatistics : NSObject
{
    NSString *_fromType;
    NSString *_fromSubtype;
    NSString *_rpage;
    NSString *_pbStr;
    NSString *_bstp;
    NSString *_adStr;
    NSString *_adType;
    NSString *_block;
    NSString *_rseat;
    NSString *_qpid;
    NSString *_cRtype;
    NSString *_cRclktp;
    NSString *_rRank;
    NSString *_rTaid;
    NSString *_rTcid;
    NSString *_rSrc;
    NSString *_fromRec;
    NSString *_pingback;
    NSString *_event;
    NSString *_tcID;
    NSString *_taID;
    NSString *_rType;
    NSString *_rClickTp;
    NSString *_cardRctp;
    NSString *_m_type;
    NSString *_is_vip;
    NSString *_source;
    NSString *_spid;
    NSString *_fromCategoryId;
    NSString *_themeId;
    NSString *_event_id;
    NSString *_bucket;
    NSString *_t_type;
    NSString *_docs;
    NSString *_docIDs;
    NSString *_docId;
    NSString *_siteId;
    NSString *_channelId;
    NSString *_search_time;
    NSString *_rec_source;
    NSString *_fc;
    NSString *_log;
    NSString *_mod;
    NSString *_purl;
    NSString *_card_block;
    NSString *_showType;
    NSString *_showUsract;
    NSString *_clickType;
    NSString *_clickUsract;
    NSString *_tpid;
    NSString *_feedid;
    NSString *_isfeed;
    NSString *_isfan;
    NSString *_tag;
    NSString *_rcstp;
    NSString *_sRelq;
    NSString *_sSr;
    NSString *_aid;
    NSString *_rTag;
    NSString *_rTtype;
    NSString *_rMtype;
    NSString *_rIsvip;
    NSString *_rTpid;
    NSString *_rSource;
    NSString *_rTvid;
    NSString *_sSite;
    NSString *_sItype;
    NSString *_intentType;
    NSString *_sPtype;
    NSString *_sTarget;
    NSString *_sDocIDs;
    NSString *_c1;
    NSString *_r_themeid;
    NSString *_r_click_type;
    NSString *_r_show_type;
    NSString *_r_show_usract;
    NSString *_r_click_usract;
    NSString *_isCupid;
    NSString *_adIndex;
    NSString *_zoneId;
    NSString *_adShowpingback;
    NSString *_isadshr;
    NSString *_pu2;
    NSString *_timeSlice;
    NSString *_noShowPingback;
    NSString *_adArea;
    NSString *_r_ext;
    NSString *_f_sid;
    NSString *_vvauto;
    QYUCardStatisticsControl *_statistics_control;
    NSDictionary *_originalDic;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSDictionary *originalDic; // @synthesize originalDic=_originalDic;
@property(retain, nonatomic) QYUCardStatisticsControl *statistics_control; // @synthesize statistics_control=_statistics_control;
@property(copy, nonatomic) NSString *vvauto; // @synthesize vvauto=_vvauto;
@property(copy, nonatomic) NSString *f_sid; // @synthesize f_sid=_f_sid;
@property(copy, nonatomic) NSString *r_ext; // @synthesize r_ext=_r_ext;
@property(copy, nonatomic) NSString *adArea; // @synthesize adArea=_adArea;
@property(copy, nonatomic) NSString *noShowPingback; // @synthesize noShowPingback=_noShowPingback;
@property(copy, nonatomic) NSString *timeSlice; // @synthesize timeSlice=_timeSlice;
@property(copy, nonatomic) NSString *pu2; // @synthesize pu2=_pu2;
@property(copy, nonatomic) NSString *isadshr; // @synthesize isadshr=_isadshr;
@property(copy, nonatomic) NSString *adShowpingback; // @synthesize adShowpingback=_adShowpingback;
@property(copy, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
@property(copy, nonatomic) NSString *adIndex; // @synthesize adIndex=_adIndex;
@property(copy, nonatomic) NSString *isCupid; // @synthesize isCupid=_isCupid;
@property(copy, nonatomic) NSString *r_click_usract; // @synthesize r_click_usract=_r_click_usract;
@property(copy, nonatomic) NSString *r_show_usract; // @synthesize r_show_usract=_r_show_usract;
@property(copy, nonatomic) NSString *r_show_type; // @synthesize r_show_type=_r_show_type;
@property(copy, nonatomic) NSString *r_click_type; // @synthesize r_click_type=_r_click_type;
@property(copy, nonatomic) NSString *r_themeid; // @synthesize r_themeid=_r_themeid;
@property(copy, nonatomic) NSString *c1; // @synthesize c1=_c1;
@property(copy, nonatomic) NSString *sDocIDs; // @synthesize sDocIDs=_sDocIDs;
@property(copy, nonatomic) NSString *sTarget; // @synthesize sTarget=_sTarget;
@property(copy, nonatomic) NSString *sPtype; // @synthesize sPtype=_sPtype;
@property(copy, nonatomic) NSString *intentType; // @synthesize intentType=_intentType;
@property(copy, nonatomic) NSString *sItype; // @synthesize sItype=_sItype;
@property(copy, nonatomic) NSString *sSite; // @synthesize sSite=_sSite;
@property(copy, nonatomic) NSString *rTvid; // @synthesize rTvid=_rTvid;
@property(copy, nonatomic) NSString *rSource; // @synthesize rSource=_rSource;
@property(copy, nonatomic) NSString *rTpid; // @synthesize rTpid=_rTpid;
@property(copy, nonatomic) NSString *rIsvip; // @synthesize rIsvip=_rIsvip;
@property(copy, nonatomic) NSString *rMtype; // @synthesize rMtype=_rMtype;
@property(copy, nonatomic) NSString *rTtype; // @synthesize rTtype=_rTtype;
@property(copy, nonatomic) NSString *rTag; // @synthesize rTag=_rTag;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *sSr; // @synthesize sSr=_sSr;
@property(copy, nonatomic) NSString *sRelq; // @synthesize sRelq=_sRelq;
@property(copy, nonatomic) NSString *rcstp; // @synthesize rcstp=_rcstp;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *isfan; // @synthesize isfan=_isfan;
@property(copy, nonatomic) NSString *isfeed; // @synthesize isfeed=_isfeed;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
@property(copy, nonatomic) NSString *tpid; // @synthesize tpid=_tpid;
@property(copy, nonatomic) NSString *clickUsract; // @synthesize clickUsract=_clickUsract;
@property(copy, nonatomic) NSString *clickType; // @synthesize clickType=_clickType;
@property(copy, nonatomic) NSString *showUsract; // @synthesize showUsract=_showUsract;
@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString *card_block; // @synthesize card_block=_card_block;
@property(copy, nonatomic) NSString *purl; // @synthesize purl=_purl;
@property(copy, nonatomic) NSString *mod; // @synthesize mod=_mod;
@property(copy, nonatomic) NSString *log; // @synthesize log=_log;
@property(copy, nonatomic) NSString *fc; // @synthesize fc=_fc;
@property(copy, nonatomic) NSString *rec_source; // @synthesize rec_source=_rec_source;
@property(copy, nonatomic) NSString *search_time; // @synthesize search_time=_search_time;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *siteId; // @synthesize siteId=_siteId;
@property(copy, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(copy, nonatomic) NSString *docIDs; // @synthesize docIDs=_docIDs;
@property(copy, nonatomic) NSString *docs; // @synthesize docs=_docs;
@property(copy, nonatomic) NSString *t_type; // @synthesize t_type=_t_type;
@property(copy, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(copy, nonatomic) NSString *event_id; // @synthesize event_id=_event_id;
@property(copy, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(copy, nonatomic) NSString *fromCategoryId; // @synthesize fromCategoryId=_fromCategoryId;
@property(copy, nonatomic) NSString *spid; // @synthesize spid=_spid;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *is_vip; // @synthesize is_vip=_is_vip;
@property(copy, nonatomic) NSString *m_type; // @synthesize m_type=_m_type;
@property(copy, nonatomic) NSString *cardRctp; // @synthesize cardRctp=_cardRctp;
@property(copy, nonatomic) NSString *rClickTp; // @synthesize rClickTp=_rClickTp;
@property(copy, nonatomic) NSString *rType; // @synthesize rType=_rType;
@property(copy, nonatomic) NSString *taID; // @synthesize taID=_taID;
@property(copy, nonatomic) NSString *tcID; // @synthesize tcID=_tcID;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSString *pingback; // @synthesize pingback=_pingback;
@property(copy, nonatomic) NSString *fromRec; // @synthesize fromRec=_fromRec;
@property(copy, nonatomic) NSString *rSrc; // @synthesize rSrc=_rSrc;
@property(copy, nonatomic) NSString *rTcid; // @synthesize rTcid=_rTcid;
@property(copy, nonatomic) NSString *rTaid; // @synthesize rTaid=_rTaid;
@property(copy, nonatomic) NSString *rRank; // @synthesize rRank=_rRank;
@property(copy, nonatomic) NSString *cRclktp; // @synthesize cRclktp=_cRclktp;
@property(copy, nonatomic) NSString *cRtype; // @synthesize cRtype=_cRtype;
@property(copy, nonatomic) NSString *qpid; // @synthesize qpid=_qpid;
@property(copy, nonatomic) NSString *rseat; // @synthesize rseat=_rseat;
@property(copy, nonatomic) NSString *block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *adStr; // @synthesize adStr=_adStr;
@property(copy, nonatomic) NSString *bstp; // @synthesize bstp=_bstp;
@property(copy, nonatomic) NSString *pbStr; // @synthesize pbStr=_pbStr;
@property(copy, nonatomic) NSString *rpage; // @synthesize rpage=_rpage;
@property(copy, nonatomic) NSString *fromSubtype; // @synthesize fromSubtype=_fromSubtype;
@property(copy, nonatomic) NSString *fromType; // @synthesize fromType=_fromType;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

