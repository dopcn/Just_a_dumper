//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ChannelGroup : NSObject <NSCoding>
{
    _Bool _showFilter;
    unsigned long long _type;
    NSString *_title;
    unsigned long long _jumpType;
    NSString *_cid;
    NSString *_subTitle;
    NSString *_icon;
    NSString *_bgIcon;
    NSMutableArray *_list;
}

+ (id)parseChannelGroup:(id)arg1;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *bgIcon; // @synthesize bgIcon=_bgIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool showFilter; // @synthesize showFilter=_showFilter;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

