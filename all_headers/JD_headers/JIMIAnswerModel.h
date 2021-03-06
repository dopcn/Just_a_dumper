//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JIMIBaseModel.h"

@class NSArray, NSNumber, NSString;

@interface JIMIAnswerModel : JIMIBaseModel
{
    _Bool _has_button;
    _Bool _isNotHtmlText;
    NSString *_text;
    NSString *_ptype;
    NSArray *_answers;
    NSString *_button_text;
    NSNumber *_answer_note;
    id _codeAnswer;
}

@property(retain, nonatomic) id codeAnswer; // @synthesize codeAnswer=_codeAnswer;
@property(nonatomic) _Bool isNotHtmlText; // @synthesize isNotHtmlText=_isNotHtmlText;
@property(retain, nonatomic) NSNumber *answer_note; // @synthesize answer_note=_answer_note;
@property(copy, nonatomic) NSString *button_text; // @synthesize button_text=_button_text;
@property(nonatomic) _Bool has_button; // @synthesize has_button=_has_button;
@property(retain, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(copy, nonatomic) NSString *ptype; // @synthesize ptype=_ptype;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)setDic:(id)arg1;

@end

