//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HXFirstPageTabInfo : NSObject
{
    unsigned long long _tabType;
    NSString *_title;
    NSString *_url;
    NSString *_tjid;
    NSString *_webrsid;
}

@property(copy, nonatomic) NSString *webrsid; // @synthesize webrsid=_webrsid;
@property(copy, nonatomic) NSString *tjid; // @synthesize tjid=_tjid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

