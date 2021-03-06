//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class NSString, NewProductModel, UIButton, UIView;
@protocol PDDrugAnswerFloorProtocol;

@interface PDDrugAnswerFloorView : PDFloorBaseView <PDViewProtocol>
{
    id <PDDrugAnswerFloorProtocol> _drugDelegate;
    UIButton *_certificateBtn;
    UIButton *_answerBtn;
    UIView *_splitView;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UIButton *answerBtn; // @synthesize answerBtn=_answerBtn;
@property(retain, nonatomic) UIButton *certificateBtn; // @synthesize certificateBtn=_certificateBtn;
@property(nonatomic) __weak id <PDDrugAnswerFloorProtocol> drugDelegate; // @synthesize drugDelegate=_drugDelegate;
- (void).cxx_destruct;
- (void)jumpToAnswerPage:(id)arg1;
- (void)jumpToCertificatePage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetState;
- (void)renderUIWithProductModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

