//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBPopViewVC.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIView;
@protocol GiveUpReasonsStatisticsDelegate;

@interface GiveUpReasonsStatisticsViewController : MTBPopViewVC
{
    NSString *_tintMessageString;
    NSArray *_reasonsArray;
    id <GiveUpReasonsStatisticsDelegate> _delegate;
    NSMutableArray *_mArrayReasonsLabel;
    UIView *_popUpImageReasonView;
    UIButton *_feedbackButton;
}

@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) UIView *popUpImageReasonView; // @synthesize popUpImageReasonView=_popUpImageReasonView;
@property(retain, nonatomic) NSMutableArray *mArrayReasonsLabel; // @synthesize mArrayReasonsLabel=_mArrayReasonsLabel;
@property(nonatomic) __weak id <GiveUpReasonsStatisticsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *reasonsArray; // @synthesize reasonsArray=_reasonsArray;
@property(retain, nonatomic) NSString *tintMessageString; // @synthesize tintMessageString=_tintMessageString;
- (void).cxx_destruct;
- (struct CGPoint)centralOfTouches:(id)arg1 inVeiw:(id)arg2;
- (id)itemLabelAtPoint:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)feedbackButtonClick;
- (double)adapterOringinY:(double)arg1;
- (double)adapterOriginX:(double)arg1;
- (double)adapterHeight:(double)arg1;
- (double)adapterWidth:(double)arg1;
- (void)mt_createEvents;
- (void)mt_createViews;

@end

