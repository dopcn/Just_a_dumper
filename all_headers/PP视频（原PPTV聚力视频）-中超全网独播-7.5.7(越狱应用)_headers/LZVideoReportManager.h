//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LZVideoReportView, NSString;

@interface LZVideoReportManager : NSObject
{
    NSString *_videoId;
    LZVideoReportView *_reportView;
}

+ (void)showReportViewWithVideoId:(id)arg1;
@property(retain, nonatomic) LZVideoReportView *reportView; // @synthesize reportView=_reportView;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)reportSuccessWithModel:(id)arg1;
- (void)showTips:(id)arg1 detailText:(id)arg2;
- (void)showReportViewWithVideoId:(id)arg1;

@end

