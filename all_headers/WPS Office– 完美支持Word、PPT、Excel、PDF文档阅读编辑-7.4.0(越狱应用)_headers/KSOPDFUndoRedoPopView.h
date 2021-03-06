//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol KSOPDFUndoRedoPopViewDelegate;

@interface KSOPDFUndoRedoPopView : UIView
{
    UIButton *_undoButton;
    UIButton *_redoButton;
    id <KSOPDFUndoRedoPopViewDelegate> _delegate;
    UIImageView *_popView;
    UIView *_boxView;
    UIView *_lineView;
    UIView *_parentView;
    UIView *_anchorView;
}

@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *boxView; // @synthesize boxView=_boxView;
@property(retain, nonatomic) UIImageView *popView; // @synthesize popView=_popView;
@property(nonatomic) __weak id <KSOPDFUndoRedoPopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *redoButton; // @synthesize redoButton=_redoButton;
@property(retain, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)buttonTouch:(id)arg1;
- (void)layoutSubviews;
- (void)showFromView:(id)arg1;
- (void)creatGestureRecognizer;
- (void)creatButton;
- (void)creatPopView;
- (id)initWithParentView:(id)arg1 delegate:(id)arg2;

@end

