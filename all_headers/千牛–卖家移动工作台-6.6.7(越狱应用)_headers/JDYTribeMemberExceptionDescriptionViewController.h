//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel;

@interface JDYTribeMemberExceptionDescriptionViewController : UIViewController
{
    UILabel *_riskUserLabel;
    UILabel *_zombieUserLabel;
    UILabel *_riskUserExplainLabel;
    UILabel *_zombieUserExplainLabel;
}

@property(nonatomic) __weak UILabel *zombieUserExplainLabel; // @synthesize zombieUserExplainLabel=_zombieUserExplainLabel;
@property(nonatomic) __weak UILabel *riskUserExplainLabel; // @synthesize riskUserExplainLabel=_riskUserExplainLabel;
@property(nonatomic) __weak UILabel *zombieUserLabel; // @synthesize zombieUserLabel=_zombieUserLabel;
@property(nonatomic) __weak UILabel *riskUserLabel; // @synthesize riskUserLabel=_riskUserLabel;
- (void).cxx_destruct;
- (void)backAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

