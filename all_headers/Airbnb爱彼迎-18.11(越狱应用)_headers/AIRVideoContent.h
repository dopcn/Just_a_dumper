//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRVideoContent : AIRModel
{
    NSString *_videoContentId;
    NSURL *_video200kURL;
    NSURL *_video400kURL;
    NSURL *_video600kURL;
    NSURL *_video800kURL;
}

+ (id)customKeyPathMapping;
@property(readonly, copy, nonatomic) NSURL *video800kURL; // @synthesize video800kURL=_video800kURL;
@property(readonly, copy, nonatomic) NSURL *video600kURL; // @synthesize video600kURL=_video600kURL;
@property(readonly, copy, nonatomic) NSURL *video400kURL; // @synthesize video400kURL=_video400kURL;
@property(readonly, copy, nonatomic) NSURL *video200kURL; // @synthesize video200kURL=_video200kURL;
@property(readonly, copy, nonatomic) NSString *videoContentId; // @synthesize videoContentId=_videoContentId;
- (void).cxx_destruct;

@end

