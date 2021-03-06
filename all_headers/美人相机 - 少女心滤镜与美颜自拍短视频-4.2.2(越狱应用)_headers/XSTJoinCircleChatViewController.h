//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSTViewController.h"

@class NSMutableAttributedString, NSNumber, NSString, UILabel, UIView, XSTLimitTextField;

@interface XSTJoinCircleChatViewController : XSTViewController
{
    UIView *_inputView;
    XSTLimitTextField *_textField;
    UILabel *_alertLabel;
    NSMutableAttributedString *_alertString;
    NSString *_textFieldLastString;
    NSString *_uniqueKey;
    NSNumber *_joinCheck;
    long long _apTimes;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long apTimes; // @synthesize apTimes=_apTimes;
@property(retain, nonatomic) NSNumber *joinCheck; // @synthesize joinCheck=_joinCheck;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(retain, nonatomic) NSString *textFieldLastString; // @synthesize textFieldLastString=_textFieldLastString;
@property(retain, nonatomic) NSMutableAttributedString *alertString; // @synthesize alertString=_alertString;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) XSTLimitTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setParam:(id)arg1;
- (void)setLastText;
- (void)textFieldDidChangeText:(id)arg1;
- (void)setBarNumWithCount:(long long)arg1 preeId:(id)arg2 isGroup:(_Bool)arg3;
- (void)inserTipWithChatID:(id)arg1;
- (void)pressRightButton:(id)arg1;
- (void)viewDidLoad;

@end

