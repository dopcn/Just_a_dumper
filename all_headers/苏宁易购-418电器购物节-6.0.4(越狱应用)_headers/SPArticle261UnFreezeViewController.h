//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface SPArticle261UnFreezeViewController : SPBaseViewController
{
    NSString *_promotionText;
    NSString *_code;
    long long _type;
    UIImageView *_topImageView;
    UILabel *_middleLabel;
    UIButton *_nextBtn;
    UILabel *_bootemLabel;
    UIButton *_firstNextBtn;
    UIButton *_secondNextBtn;
}

@property(retain, nonatomic) UIButton *secondNextBtn; // @synthesize secondNextBtn=_secondNextBtn;
@property(retain, nonatomic) UIButton *firstNextBtn; // @synthesize firstNextBtn=_firstNextBtn;
@property(retain, nonatomic) UILabel *bootemLabel; // @synthesize bootemLabel=_bootemLabel;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *middleLabel; // @synthesize middleLabel=_middleLabel;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)backAction:(id)arg1;
- (void)callSDKAction;
- (void)accountAppealAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)viewDidLoad;

@end

