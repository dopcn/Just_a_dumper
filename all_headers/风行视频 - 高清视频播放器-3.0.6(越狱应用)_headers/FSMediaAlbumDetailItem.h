//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FSChannelItemBase.h"

@class UILabel, UIView;

@interface FSMediaAlbumDetailItem : FSChannelItemBase
{
    double _imageViewWidth;
    UIView *_updateBgView;
    UILabel *_updateLabel;
    UILabel *_scoreLabel;
}

- (void).cxx_destruct;
- (void)refreshData:(id)arg1;
- (void)clearData;
- (void)createScoreLabel;
- (void)createUpdateLabel;
- (void)createNameLabel;
- (void)createImgView;
- (id)initWithOrigin:(struct CGPoint)arg1;

@end

