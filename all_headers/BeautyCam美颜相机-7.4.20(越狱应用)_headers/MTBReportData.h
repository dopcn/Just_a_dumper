//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MTBReportData : NSObject
{
    NSDictionary *_metaData;
    unsigned long long _reportNum;
}

@property(nonatomic) unsigned long long reportNum; // @synthesize reportNum=_reportNum;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
- (void).cxx_destruct;

@end

