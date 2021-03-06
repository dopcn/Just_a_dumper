//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Sa_Pf_Info.h"

@class NSString;

@interface Sa_Pf_ModuleLoadInfo : Sa_Pf_Info
{
    NSString *_logTime;
    NSString *_pageIdentifer;
    NSString *_pageName;
    NSString *_URLString;
    long long _pageStartTime;
    long long _pageEndTime;
    long long _requestStartTime;
    long long _requestEndTime;
    long long _parseStartTime;
    long long _parseEndTime;
}

@property(nonatomic) long long parseEndTime; // @synthesize parseEndTime=_parseEndTime;
@property(nonatomic) long long parseStartTime; // @synthesize parseStartTime=_parseStartTime;
@property(nonatomic) long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(nonatomic) long long pageEndTime; // @synthesize pageEndTime=_pageEndTime;
@property(nonatomic) long long pageStartTime; // @synthesize pageStartTime=_pageStartTime;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageIdentifer; // @synthesize pageIdentifer=_pageIdentifer;
@property(retain, nonatomic) NSString *logTime; // @synthesize logTime=_logTime;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

