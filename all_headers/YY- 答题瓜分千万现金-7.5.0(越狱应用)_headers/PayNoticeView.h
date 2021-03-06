//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PayNoticeView : UIView
{
    _Bool _isChoose;
    CDUnknownBlockType _onKnowMoreAction;
    CDUnknownBlockType _onAgreeAction;
    UIView *_contentView;
    UILabel *_content;
    UIButton *_tempBtn;
    UIButton *_chooseBtn;
    UIButton *_iKnowBtn;
}

@property(nonatomic) _Bool isChoose; // @synthesize isChoose=_isChoose;
@property(nonatomic) __weak UIButton *iKnowBtn; // @synthesize iKnowBtn=_iKnowBtn;
@property(nonatomic) __weak UIButton *chooseBtn; // @synthesize chooseBtn=_chooseBtn;
@property(nonatomic) __weak UIButton *tempBtn; // @synthesize tempBtn=_tempBtn;
@property(nonatomic) __weak UILabel *content; // @synthesize content=_content;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onAgreeAction; // @synthesize onAgreeAction=_onAgreeAction;
@property(copy, nonatomic) CDUnknownBlockType onKnowMoreAction; // @synthesize onKnowMoreAction=_onKnowMoreAction;
- (void).cxx_destruct;
- (void)goBuyerKnows:(id)arg1;
- (void)iKnowAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)agreeAction:(id)arg1;
- (void)awakeFromNib;

@end

