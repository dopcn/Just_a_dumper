//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSPredicate, NSString, SNUITextView, UIButton, UIImageView, UILabel, UIView;

@interface SNSLInvoiceHeadContentCell : UITableViewCell <UITextViewDelegate>
{
    int _preRowNumber;
    int _nowRowNumber;
    NSString *_preText;
    _Bool _shouldNotResign;
    UILabel *_label1;
    SNUITextView *_textViewt;
    UIButton *_deleteBtn;
    NSString *_placeholdString;
    CDUnknownBlockType _beginEditBlock;
    CDUnknownBlockType _didChangedBlock;
    CDUnknownBlockType _rowChangeBlock;
    CDUnknownBlockType _endEditBlock;
    UILabel *_downTipTextLabel;
    UIImageView *_downTipImageView;
    NSPredicate *_hasEmojiPredicate;
    UIView *_textViewBg;
}

@property(retain, nonatomic) UIView *textViewBg; // @synthesize textViewBg=_textViewBg;
@property(retain, nonatomic) NSPredicate *hasEmojiPredicate; // @synthesize hasEmojiPredicate=_hasEmojiPredicate;
@property(retain, nonatomic) UIImageView *downTipImageView; // @synthesize downTipImageView=_downTipImageView;
@property(retain, nonatomic) UILabel *downTipTextLabel; // @synthesize downTipTextLabel=_downTipTextLabel;
@property(copy, nonatomic) CDUnknownBlockType endEditBlock; // @synthesize endEditBlock=_endEditBlock;
@property(copy, nonatomic) CDUnknownBlockType rowChangeBlock; // @synthesize rowChangeBlock=_rowChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didChangedBlock; // @synthesize didChangedBlock=_didChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType beginEditBlock; // @synthesize beginEditBlock=_beginEditBlock;
@property(retain, nonatomic) NSString *placeholdString; // @synthesize placeholdString=_placeholdString;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) _Bool shouldNotResign; // @synthesize shouldNotResign=_shouldNotResign;
@property(retain, nonatomic) SNUITextView *textViewt; // @synthesize textViewt=_textViewt;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)filterEmojiStringInString:(id)arg1;
- (_Bool)has_emoji:(id)arg1;
- (void)setUpContentWithLeftText:(id)arg1;
- (void)deleteBtnTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

