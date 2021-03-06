//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYPlayerPHContentViewProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel;
@protocol QYPlayerPHContentViewProtocol;

@interface QYPlayerPHAlertView : UIView <QYPlayerPHContentViewProtocol>
{
    double _recommendHeight;
    double _recommendWidth;
    UILabel *_titleLabel;
    UIView<QYPlayerPHContentViewProtocol> *_messageView;
    NSArray *_optionButtons;
    UIView *_horizonLine;
    NSMutableArray *_verticalLines;
}

@property(retain, nonatomic) NSMutableArray *verticalLines; // @synthesize verticalLines=_verticalLines;
@property(retain, nonatomic) UIView *horizonLine; // @synthesize horizonLine=_horizonLine;
@property(retain, nonatomic) NSArray *optionButtons; // @synthesize optionButtons=_optionButtons;
@property(retain, nonatomic) UIView<QYPlayerPHContentViewProtocol> *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double recommendWidth; // @synthesize recommendWidth=_recommendWidth;
@property(nonatomic) double recommendHeight; // @synthesize recommendHeight=_recommendHeight;
- (void).cxx_destruct;
- (void)createVerticalSeperators:(unsigned long long)arg1;
- (void)removeVerticalLines;
- (void)createHorizonSeperate;
- (void)createTitleLabel;
- (void)initializeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

