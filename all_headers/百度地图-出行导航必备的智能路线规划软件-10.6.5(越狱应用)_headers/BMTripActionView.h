//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BMTaResponseMltripEntity, UIButton;
@protocol BMTripActionViewDelegate;

@interface BMTripActionView : UIView
{
    BMTaResponseMltripEntity *_tripEntity;
    id <BMTripActionViewDelegate> _delegate;
    UIButton *_remindButton;
    UIView *_lineView;
    UIButton *_editButton;
    UIView *_lineView2;
    UIButton *_deleButton;
}

@property(retain, nonatomic) UIButton *deleButton; // @synthesize deleButton=_deleButton;
@property(retain, nonatomic) UIView *lineView2; // @synthesize lineView2=_lineView2;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
@property(nonatomic) __weak id <BMTripActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BMTaResponseMltripEntity *tripEntity; // @synthesize tripEntity=_tripEntity;
- (void).cxx_destruct;
- (void)buttonDidClick:(id)arg1;
- (id)onelineView;
- (id)getOneButton;
- (void)hiddenRemindBtn;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

