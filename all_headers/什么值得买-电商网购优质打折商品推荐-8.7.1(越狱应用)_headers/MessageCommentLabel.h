//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoreTextLabel.h"

@class NSMutableDictionary;

@interface MessageCommentLabel : CoreTextLabel
{
    _Bool _textIsNeedCopy;
    _Bool _textIsNeedPush;
    NSMutableDictionary *_dataDict;
}

@property(nonatomic) _Bool textIsNeedPush; // @synthesize textIsNeedPush=_textIsNeedPush;
@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) _Bool textIsNeedCopy; // @synthesize textIsNeedCopy=_textIsNeedCopy;
- (void).cxx_destruct;
- (void)pm_message_action;
- (void)system_message_action;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@end

