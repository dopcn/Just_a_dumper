//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MLEmojiLabel, UIImage;

@interface QYPPSeriesGenerator : NSObject
{
    MLEmojiLabel *_richText;
    UIImage *_joinBtnNorImg;
    UIImage *_joinBtnHigImg;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getJoinHigImg;
- (id)getJoinNorImg;
- (double)richTextHeight:(id)arg1 maxWidth:(double)arg2 fontSize:(double)arg3 numberOfLines:(long long)arg4;
- (id)init;

@end

