//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZYBAdLauchPageAdItem.h"

@class CreativemetaItem, NSMutableArray, NSString;

@interface ThirdAdItemClass : ZYBAdLauchPageAdItem
{
    _Bool _isHaveAd;
    NSMutableArray *_click_trackers;
    NSMutableArray *_render_trackers;
    NSMutableArray *_adPosition_render_trackers;
    NSMutableArray *_addition;
    NSString *_title;
    NSString *_content;
    NSString *_desc;
    NSString *_name;
    NSString *_dspName;
    NSString *_psid;
    CreativemetaItem *_creativemeta;
}

@property(retain, nonatomic) CreativemetaItem *creativemeta; // @synthesize creativemeta=_creativemeta;
@property(retain, nonatomic) NSString *psid; // @synthesize psid=_psid;
@property(retain, nonatomic) NSString *dspName; // @synthesize dspName=_dspName;
@property(nonatomic) _Bool isHaveAd; // @synthesize isHaveAd=_isHaveAd;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSMutableArray *addition; // @synthesize addition=_addition;
@property(retain) NSMutableArray *adPosition_render_trackers; // @synthesize adPosition_render_trackers=_adPosition_render_trackers;
@property(retain) NSMutableArray *render_trackers; // @synthesize render_trackers=_render_trackers;
@property(retain) NSMutableArray *click_trackers; // @synthesize click_trackers=_click_trackers;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1;

@end

