//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYTVBaseWatchFunc.h"

#import "YYReportViewDelegate-Protocol.h"

@class CommonReportInfo, NSString;

@interface YYTVWatchReportFunc : YYTVBaseWatchFunc <YYReportViewDelegate>
{
    CommonReportInfo *_reportInfo;
}

@property(retain, nonatomic) CommonReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
- (void).cxx_destruct;
- (id)getCommonReportInfo:(id)arg1;
- (void)reportItemSelected:(long long)arg1;
- (void)reportCancel;
- (id)reportInfoWhenReportSelected;
- (void)report:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

