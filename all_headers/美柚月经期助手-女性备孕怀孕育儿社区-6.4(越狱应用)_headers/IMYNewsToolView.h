//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYNewsToolModel, SYHomeCardYesNoButton, UIGestureRecognizer, UIImageView, UILabel;
@protocol IMYNewsRecordToolCardViewModel;

@interface IMYNewsToolView : UIView
{
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UIImageView *_arrowImageView;
    SYHomeCardYesNoButton *_yesNoButton;
    id <IMYNewsRecordToolCardViewModel> _cardViewModel;
    unsigned long long _type;
    unsigned long long _lastType;
    IMYNewsToolModel *_model;
    UIGestureRecognizer *_gestureRecognizer;
}

@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak IMYNewsToolModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long lastType; // @synthesize lastType=_lastType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <IMYNewsRecordToolCardViewModel> cardViewModel; // @synthesize cardViewModel=_cardViewModel;
@property(retain, nonatomic) SYHomeCardYesNoButton *yesNoButton; // @synthesize yesNoButton=_yesNoButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tapGestureAction:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareUI;
- (id)init;

@end

