//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class EQDownloadModel, KGSwitch, UIButton, UIImageView, UILabel, UIView;
@protocol EQViperInfoCellDelegate;

@interface EQViperInfoCell : UITableViewCell
{
    id <EQViperInfoCellDelegate> _delegate;
    EQDownloadModel *_eqInfo;
    UILabel *_nameLabel;
    UILabel *_userCountLabel;
    UIImageView *_smallIcon;
    UIImageView *_vipIcon;
    UIButton *_functionBtn;
    KGSwitch *_starSwitch;
    UIButton *_functionAreaBtn;
    UIImageView *_loadingView;
    UIButton *_commentBtn;
    UIView *_commentCountRightSepartorLine;
    UIView *_bottomSepartorLine;
}

@property(retain, nonatomic) UIView *bottomSepartorLine; // @synthesize bottomSepartorLine=_bottomSepartorLine;
@property(retain, nonatomic) UIView *commentCountRightSepartorLine; // @synthesize commentCountRightSepartorLine=_commentCountRightSepartorLine;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *functionAreaBtn; // @synthesize functionAreaBtn=_functionAreaBtn;
@property(retain, nonatomic) KGSwitch *starSwitch; // @synthesize starSwitch=_starSwitch;
@property(retain, nonatomic) UIButton *functionBtn; // @synthesize functionBtn=_functionBtn;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) UIImageView *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain, nonatomic) UILabel *userCountLabel; // @synthesize userCountLabel=_userCountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) EQDownloadModel *eqInfo; // @synthesize eqInfo=_eqInfo;
@property(nonatomic) __weak id <EQViperInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentAction:(id)arg1;
- (void)starSwitchClicked:(id)arg1;
- (void)functionAreaBtnDidTouchCancel:(id)arg1;
- (void)functionAreaBtnDidTouchDown:(id)arg1;
- (void)functionAreaBtnClicked:(id)arg1;
- (void)btnDidTouchCancel:(id)arg1;
- (void)btnDidTouchDown:(id)arg1;
- (void)btnDidClicked:(id)arg1;
- (void)refreshData:(id)arg1 viewSize:(struct CGSize)arg2 isNearest:(_Bool)arg3;
- (void)p_layoutAllItemsWithViewSize:(struct CGSize)arg1;
- (id)p_commentCountWithCount:(long long)arg1;
- (id)p_userCountStringWithCount:(long long)arg1;
- (void)p_refreshCommentCountAndAuthor;
- (void)p_refreshTitleAndUserCount;
- (void)p_refreshVipIconState;
- (void)p_refreshSmallIcon;
- (void)p_refreshLoadViewState:(unsigned long long)arg1;
- (void)p_refreshSwitchState;
- (void)p_refreshButtonStatus:(unsigned long long)arg1;
- (void)makeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

