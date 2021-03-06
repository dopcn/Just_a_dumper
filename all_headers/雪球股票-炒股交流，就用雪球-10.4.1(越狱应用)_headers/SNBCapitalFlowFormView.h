//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;

@interface SNBCapitalFlowFormView : UIView
{
    NSArray *_datas;
    UILabel *_flowInLabel;
    UILabel *_flowOutLabel;
    UILabel *_bigCapitalLabel;
    UILabel *_bigCapitalIn;
    UILabel *_bigCapitalOut;
    UILabel *_centreCapitalLabel;
    UILabel *_centreCapitalIn;
    UILabel *_centreCapitalOut;
    UILabel *_smallCapitalLabel;
    UILabel *_smallCapitalIn;
    UILabel *_smallCapitalOut;
    NSMutableArray *_labels;
}

+ (id)capitalFlowFormView;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) __weak UILabel *smallCapitalOut; // @synthesize smallCapitalOut=_smallCapitalOut;
@property(nonatomic) __weak UILabel *smallCapitalIn; // @synthesize smallCapitalIn=_smallCapitalIn;
@property(nonatomic) __weak UILabel *smallCapitalLabel; // @synthesize smallCapitalLabel=_smallCapitalLabel;
@property(nonatomic) __weak UILabel *centreCapitalOut; // @synthesize centreCapitalOut=_centreCapitalOut;
@property(nonatomic) __weak UILabel *centreCapitalIn; // @synthesize centreCapitalIn=_centreCapitalIn;
@property(nonatomic) __weak UILabel *centreCapitalLabel; // @synthesize centreCapitalLabel=_centreCapitalLabel;
@property(nonatomic) __weak UILabel *bigCapitalOut; // @synthesize bigCapitalOut=_bigCapitalOut;
@property(nonatomic) __weak UILabel *bigCapitalIn; // @synthesize bigCapitalIn=_bigCapitalIn;
@property(nonatomic) __weak UILabel *bigCapitalLabel; // @synthesize bigCapitalLabel=_bigCapitalLabel;
@property(nonatomic) __weak UILabel *flowOutLabel; // @synthesize flowOutLabel=_flowOutLabel;
@property(nonatomic) __weak UILabel *flowInLabel; // @synthesize flowInLabel=_flowInLabel;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (void)updateTheme:(_Bool)arg1;
- (void)_snb_configureObservers;
- (void)awakeFromNib;

@end

