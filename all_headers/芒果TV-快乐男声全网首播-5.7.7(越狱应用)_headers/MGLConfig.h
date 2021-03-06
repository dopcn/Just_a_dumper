//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface MGLConfig : NSObject <NSCoding>
{
    NSString *_version;
    NSString *_protocol_reg;
    NSString *_protocol_pay;
    NSString *_recharge_recode_url;
    NSString *_im_verify_address;
    NSArray *_ads;
    NSArray *_findmenus;
    NSArray *_giftsbuy;
    NSArray *_buckets;
    NSString *_takeMaxDur;
    NSString *_takeMinDur;
    NSString *_takeRate;
    NSString *_videoSize;
    NSString *_liveTabs;
    NSString *_tabTemplateId;
    NSString *_videoBitRate;
    NSString *_videoFPS;
    NSString *_audioBitRate;
    NSString *_audioSampleRate;
    NSString *_maxVideoBitRate;
    NSString *_minVideoBitRate;
    NSString *_liveReportCycle;
    NSString *_sigFill0Width;
    NSString *_voidflag;
    NSString *_liveflag;
    NSString *_spaceflag;
    NSString *__support;
    NSDictionary *_UrlRules;
}

@property(copy, nonatomic) NSDictionary *UrlRules; // @synthesize UrlRules=_UrlRules;
@property(copy, nonatomic) NSString *_support; // @synthesize _support=__support;
@property(copy, nonatomic) NSString *spaceflag; // @synthesize spaceflag=_spaceflag;
@property(copy, nonatomic) NSString *liveflag; // @synthesize liveflag=_liveflag;
@property(copy, nonatomic) NSString *voidflag; // @synthesize voidflag=_voidflag;
@property(copy, nonatomic) NSString *sigFill0Width; // @synthesize sigFill0Width=_sigFill0Width;
@property(copy, nonatomic) NSString *liveReportCycle; // @synthesize liveReportCycle=_liveReportCycle;
@property(copy, nonatomic) NSString *minVideoBitRate; // @synthesize minVideoBitRate=_minVideoBitRate;
@property(copy, nonatomic) NSString *maxVideoBitRate; // @synthesize maxVideoBitRate=_maxVideoBitRate;
@property(copy, nonatomic) NSString *audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(copy, nonatomic) NSString *audioBitRate; // @synthesize audioBitRate=_audioBitRate;
@property(copy, nonatomic) NSString *videoFPS; // @synthesize videoFPS=_videoFPS;
@property(copy, nonatomic) NSString *videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(copy, nonatomic) NSString *tabTemplateId; // @synthesize tabTemplateId=_tabTemplateId;
@property(copy, nonatomic) NSString *liveTabs; // @synthesize liveTabs=_liveTabs;
@property(copy, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *takeRate; // @synthesize takeRate=_takeRate;
@property(copy, nonatomic) NSString *takeMinDur; // @synthesize takeMinDur=_takeMinDur;
@property(copy, nonatomic) NSString *takeMaxDur; // @synthesize takeMaxDur=_takeMaxDur;
@property(retain, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property(retain, nonatomic) NSArray *giftsbuy; // @synthesize giftsbuy=_giftsbuy;
@property(retain, nonatomic) NSArray *findmenus; // @synthesize findmenus=_findmenus;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(copy, nonatomic) NSString *im_verify_address; // @synthesize im_verify_address=_im_verify_address;
@property(copy, nonatomic) NSString *recharge_recode_url; // @synthesize recharge_recode_url=_recharge_recode_url;
@property(copy, nonatomic) NSString *protocol_pay; // @synthesize protocol_pay=_protocol_pay;
@property(copy, nonatomic) NSString *protocol_reg; // @synthesize protocol_reg=_protocol_reg;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)getBucket:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

