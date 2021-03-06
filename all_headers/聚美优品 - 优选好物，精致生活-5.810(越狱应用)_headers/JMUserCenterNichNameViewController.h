//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewController.h"

@class NSLayoutConstraint, NSString, UILabel, UITextField;

@interface JMUserCenterNichNameViewController : JMBaseViewController
{
    _Bool _canRequestCompleteApi;
    _Bool _isCompleteName;
    NSString *_nickName;
    UITextField *_textField;
    NSLayoutConstraint *_separatorHeightConstraint;
    UILabel *_remindLabel;
}

@property(retain, nonatomic) UILabel *remindLabel; // @synthesize remindLabel=_remindLabel;
@property(retain, nonatomic) NSLayoutConstraint *separatorHeightConstraint; // @synthesize separatorHeightConstraint=_separatorHeightConstraint;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool isCompleteName; // @synthesize isCompleteName=_isCompleteName;
@property(nonatomic) _Bool canRequestCompleteApi; // @synthesize canRequestCompleteApi=_canRequestCompleteApi;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)fakeSuccessWithNewNickName:(id)arg1;
- (void)dealloc;
- (void)updateNickNameDidFail:(id)arg1;
- (void)updateNicknameSuccessWithNewName:(id)arg1 responseDic:(id)arg2;
- (void)updateNickNameDidFinish:(id)arg1 withResponse:(id)arg2;
- (void)saveBarButtonItemPressed:(id)arg1;
- (void)cancelBarButtonItemPressed:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

@end

