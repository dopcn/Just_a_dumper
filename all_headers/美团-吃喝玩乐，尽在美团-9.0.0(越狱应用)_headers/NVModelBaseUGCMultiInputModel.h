//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseUGCMultiInputModel : NVBaseModel
{
    NSString *_inputTextRight;
    NSString *_inputTextLeft;
    NSString *_inputLeftKey;
    NSString *_inputRightKey;
    long long _inputTypeRight;
    long long _inputTypeLeft;
}

+ (id)metaInfo;
@property(nonatomic) long long inputTypeLeft; // @synthesize inputTypeLeft=_inputTypeLeft;
@property(nonatomic) long long inputTypeRight; // @synthesize inputTypeRight=_inputTypeRight;
@property(copy, nonatomic) NSString *inputRightKey; // @synthesize inputRightKey=_inputRightKey;
@property(copy, nonatomic) NSString *inputLeftKey; // @synthesize inputLeftKey=_inputLeftKey;
@property(copy, nonatomic) NSString *inputTextLeft; // @synthesize inputTextLeft=_inputTextLeft;
@property(copy, nonatomic) NSString *inputTextRight; // @synthesize inputTextRight=_inputTextRight;
- (void).cxx_destruct;

@end

