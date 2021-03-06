//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KFCardViewCell.h"

@class KTVSingleVoteSubHeaderView, KrcShowPlane, UIActivityIndicatorView, UIImageView, UILabel;

@interface KTVSingleVoteSubCell : KFCardViewCell
{
    KTVSingleVoteSubHeaderView *_headerView;
    UILabel *_opusLabel;
    KrcShowPlane *_krcPlane;
    UIImageView *_dislikeIcon;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *dislikeIcon; // @synthesize dislikeIcon=_dislikeIcon;
@property(retain, nonatomic) KrcShowPlane *krcPlane; // @synthesize krcPlane=_krcPlane;
@property(retain, nonatomic) UILabel *opusLabel; // @synthesize opusLabel=_opusLabel;
@property(retain, nonatomic) KTVSingleVoteSubHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

