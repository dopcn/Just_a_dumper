//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMSResourceDataBase.h"

@class NSString;

@interface CMSNoticeData : CMSResourceDataBase
{
    _Bool _shouldShowHorn;
    NSString *_content;
    NSString *_link;
    double _showInterval;
}

+ (_Bool)bizDownload;
+ (id)resCode;
@property(nonatomic) double showInterval; // @synthesize showInterval=_showInterval;
@property(nonatomic) _Bool shouldShowHorn; // @synthesize shouldShowHorn=_shouldShowHorn;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)downloadConfig;
- (void)fillBizData:(id)arg1;
- (void)dealloc;

@end

