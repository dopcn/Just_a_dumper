//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class JHSVoiceConfigSubModel, NSString;

@interface JHSVoiceConfigModel : TBJSONModel
{
    _Bool _error;
    JHSVoiceConfigSubModel *_model;
    long long _code;
    NSString *_message;
}

@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) JHSVoiceConfigSubModel *model; // @synthesize model=_model;
- (void).cxx_destruct;

@end

