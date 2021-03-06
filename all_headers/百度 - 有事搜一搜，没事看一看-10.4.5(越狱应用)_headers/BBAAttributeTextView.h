//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class BBATextStorage, UIColor;
@protocol BBAAttributeTextViewProtocol;

@interface BBAAttributeTextView : UITextView
{
    UIColor *_highLightColor;
    id <BBAAttributeTextViewProtocol> _attributeDelegate;
    BBATextStorage *_storage;
}

@property(retain, nonatomic) BBATextStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <BBAAttributeTextViewProtocol> attributeDelegate; // @synthesize attributeDelegate=_attributeDelegate;
@property(retain, nonatomic) UIColor *highLightColor; // @synthesize highLightColor=_highLightColor;
- (void).cxx_destruct;
- (void)deleteRegular:(id)arg1;
- (_Bool)regularHasContains:(id)arg1;
- (void)insertRegular:(id)arg1;
- (_Bool)updateSelectRange;
- (id)hightLightString;
- (void)handleTopicAndAtWithString:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (id)regularMatchResultsWithString:(id)arg1;
- (id)regularMatchResults;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

