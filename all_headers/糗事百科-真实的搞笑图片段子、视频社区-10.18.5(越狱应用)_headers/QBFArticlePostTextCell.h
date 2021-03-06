//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YYTextViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, YYTextView;
@protocol QBFArticlePostTextCellDelegate;

@interface QBFArticlePostTextCell : UICollectionViewCell <YYTextViewDelegate>
{
    _Bool _isContainTopic;
    _Bool _isIgnoreSepecialChar;
    YYTextView *_textView;
    NSDictionary *_draftAtUsersDict;
    id <QBFArticlePostTextCellDelegate> _delegate;
    NSDictionary *_modelRetain;
    NSString *_topicStr;
    NSMutableDictionary *_atUids;
}

@property(nonatomic) _Bool isIgnoreSepecialChar; // @synthesize isIgnoreSepecialChar=_isIgnoreSepecialChar;
@property(retain, nonatomic) NSMutableDictionary *atUids; // @synthesize atUids=_atUids;
@property(nonatomic) _Bool isContainTopic; // @synthesize isContainTopic=_isContainTopic;
@property(retain, nonatomic) NSString *topicStr; // @synthesize topicStr=_topicStr;
@property(retain, nonatomic) NSDictionary *modelRetain; // @synthesize modelRetain=_modelRetain;
@property(nonatomic) __weak id <QBFArticlePostTextCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *draftAtUsersDict; // @synthesize draftAtUsersDict=_draftAtUsersDict;
@property(nonatomic) __weak YYTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)addTopic:(id)arg1;
- (_Bool)parseSpecialText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)addAtInfo:(id)arg1;
- (void)emoticonInputDidTapBackspace;
- (void)setEmojiText:(id)arg1;
- (void)setDataDict:(id)arg1;
- (void)cleanAtUserHelper;
@property(readonly) NSArray *atUsersData;
@property(readonly) NSString *contentStr;
- (void)setPlaceholder:(id)arg1;
- (void)endEditing;
- (_Bool)becomeFirstResponder;
@property(readonly) _Bool isFocused;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

