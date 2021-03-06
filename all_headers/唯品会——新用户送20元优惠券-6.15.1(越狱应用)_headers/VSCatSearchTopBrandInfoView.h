//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel, UIView, VSCatSearchTopBrandInfoViewModel;
@protocol VSServiceShareProtocol;

@interface VSCatSearchTopBrandInfoView : UICollectionViewCell
{
    VSCatSearchTopBrandInfoViewModel *_viewModel;
    id <VSServiceShareProtocol> _shareHandler;
    UIView *_containerView;
    UIButton *_brandLogo;
    UIButton *_collectBtn;
    UIButton *_shareBtn;
    UILabel *_brandNameLbl;
    UILabel *_sloganLbl;
    UILabel *_pmsLbl;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1;
@property(retain, nonatomic) UILabel *pmsLbl; // @synthesize pmsLbl=_pmsLbl;
@property(retain, nonatomic) UILabel *sloganLbl; // @synthesize sloganLbl=_sloganLbl;
@property(retain, nonatomic) UILabel *brandNameLbl; // @synthesize brandNameLbl=_brandNameLbl;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *collectBtn; // @synthesize collectBtn=_collectBtn;
@property(retain, nonatomic) UIButton *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <VSServiceShareProtocol> shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) VSCatSearchTopBrandInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onShare;
- (void)onCollect;
- (void)updateCollectStatus;
- (void)updateWithViewModel:(id)arg1;

@end

