//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, PBFansLiveDetailVideosModel, PHLiveAllVideosViewController, PHLiveModuleViewController, UIButton;

@interface PHLiveModuleFooterCell : UICollectionViewCell
{
    PBFansLiveDetailVideosModel *_fansLiveDetailVideosModel;
    CDUnknownBlockType _changeEpisodeBlock;
    UIButton *_checkingButton;
    PHLiveAllVideosViewController *_liveAllVideosViewController;
    PHLiveModuleViewController *_liveModuleViewController;
    NSString *_playLinkID;
}

@property(retain, nonatomic) NSString *playLinkID; // @synthesize playLinkID=_playLinkID;
@property(nonatomic) __weak PHLiveModuleViewController *liveModuleViewController; // @synthesize liveModuleViewController=_liveModuleViewController;
@property(retain, nonatomic) PHLiveAllVideosViewController *liveAllVideosViewController; // @synthesize liveAllVideosViewController=_liveAllVideosViewController;
@property(nonatomic) __weak UIButton *checkingButton; // @synthesize checkingButton=_checkingButton;
@property(copy, nonatomic) CDUnknownBlockType changeEpisodeBlock; // @synthesize changeEpisodeBlock=_changeEpisodeBlock;
@property(retain, nonatomic) PBFansLiveDetailVideosModel *fansLiveDetailVideosModel; // @synthesize fansLiveDetailVideosModel=_fansLiveDetailVideosModel;
- (void).cxx_destruct;
- (void)SeeMorePrograms:(id)arg1;
- (void)awakeFromNib;
- (void)refreshPlayLinkID:(id)arg1;

@end

