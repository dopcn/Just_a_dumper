//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QMBulletInfoList : NSObject
{
    NSArray *_fontList;
    NSString *_tabName;
    unsigned long long _tabId;
}

+ (id)tranlateJsonList:(id)arg1;
@property(nonatomic) unsigned long long tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(retain, nonatomic) NSArray *fontList; // @synthesize fontList=_fontList;
- (void).cxx_destruct;

@end

