//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ADCreativeViewProtocol-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface HLSRelatedADView : UIView <ADCreativeViewProtocol>
{
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIView *_seperatorLine;
    UILabel *_adMaskLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_leftAdMadkLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *leftAdMadkLayoutConstraint; // @synthesize leftAdMadkLayoutConstraint=_leftAdMadkLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topLayoutConstraint; // @synthesize topLayoutConstraint=_topLayoutConstraint;
@property(retain, nonatomic) UILabel *adMaskLabel; // @synthesize adMaskLabel=_adMaskLabel;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupPlayBackRelateViewWithData:(id)arg1;
- (void)reloadADDataWithADContent:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

