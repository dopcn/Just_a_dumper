//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextViewDelegate-Protocol.h"

@class CDMessage, NSString;

@interface CDMessageTextView : UITextView <UITextViewDelegate>
{
    CDUnknownBlockType _didTapTextCallback;
    CDMessage *_message;
}

@property(retain, nonatomic) CDMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) CDUnknownBlockType didTapTextCallback; // @synthesize didTapTextCallback=_didTapTextCallback;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)fillWithMessage:(id)arg1 cachedHTMLContent:(id)arg2 didTapCallback:(CDUnknownBlockType)arg3;
- (struct _NSRange)selectedRange;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

