//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface YYWeekStarBrocastInfo : NSObject
{
    unsigned int _anchor_id;
    unsigned int _top_cid;
    unsigned int _sub_cid;
    unsigned int _short_cid;
    unsigned int _gift_id;
    NSString *_anchor_nick;
    NSString *_icon_url;
    NSString *_text_info;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *text_info; // @synthesize text_info=_text_info;
@property(retain, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(nonatomic) unsigned int gift_id; // @synthesize gift_id=_gift_id;
@property(nonatomic) unsigned int short_cid; // @synthesize short_cid=_short_cid;
@property(nonatomic) unsigned int sub_cid; // @synthesize sub_cid=_sub_cid;
@property(nonatomic) unsigned int top_cid; // @synthesize top_cid=_top_cid;
@property(retain, nonatomic) NSString *anchor_nick; // @synthesize anchor_nick=_anchor_nick;
@property(nonatomic) unsigned int anchor_id; // @synthesize anchor_id=_anchor_id;
- (void).cxx_destruct;

@end

