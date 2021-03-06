//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EssayGuideCardViewBase, SSThemedView, SSTipModel;
@protocol EssayGuideCardDelegate;

@interface EssayGuideCardCellView : UITableViewCell
{
    SSTipModel *_tipModel;
    id <EssayGuideCardDelegate> _guideDelegate;
    SSThemedView *_bgView;
    SSThemedView *_cardBgView;
    EssayGuideCardViewBase *_cardView;
}

+ (double)heightForTipModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) EssayGuideCardViewBase *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) SSThemedView *cardBgView; // @synthesize cardBgView=_cardBgView;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <EssayGuideCardDelegate> guideDelegate; // @synthesize guideDelegate=_guideDelegate;
@property(retain, nonatomic) SSTipModel *tipModel; // @synthesize tipModel=_tipModel;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)handleBgClicked;
- (void)dismissIfNeeded;
- (_Bool)isLogin;
- (void)dismissGuideCard:(id)arg1;
- (void)accountStateChanged:(id)arg1;
- (void)accountStatesFinished:(id)arg1;
- (void)loadView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

