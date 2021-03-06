//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITextView;

@interface RichTextUtils : NSObject
{
    UITextView *_textView;
}

+ (id)shareUtils;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (id)lineCharacterRangeListForAttributeString:(id)arg1;
- (struct CGSize)sizeWithAttributeText:(id)arg1 layoutManager:(id)arg2 textContainer:(id)arg3;
- (id)attributedStringWithText:(id)arg1 propertyMap:(id)arg2 parsers:(id)arg3;
- (struct CGSize)sizeForRichTextViewWithMaxWidth:(double)arg1 text:(id)arg2 propertyMap:(id)arg3 parsers:(id)arg4;
- (struct CGSize)sizeForRichTextViewWithMaxWidth:(double)arg1 text:(id)arg2 propertyMap:(id)arg3;
- (struct CGSize)sizeForRichTextViewWithMaxWidth:(double)arg1 attributedText:(id)arg2 propertyMap:(id)arg3;
- (void)_createTextView;
- (id)init;

@end

