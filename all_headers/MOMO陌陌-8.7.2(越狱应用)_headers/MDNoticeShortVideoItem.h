//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDNoticeBaseItem.h"

@class MDShortVideoPlayModel;

@interface MDNoticeShortVideoItem : MDNoticeBaseItem
{
    MDShortVideoPlayModel *_shortVideo;
}

@property(retain, nonatomic) MDShortVideoPlayModel *shortVideo; // @synthesize shortVideo=_shortVideo;
- (void).cxx_destruct;
- (void)convertJsonToModel;
- (id)cellReuseId;
- (id)shortVideoModel;

@end

