//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIMLoginParam.h"

@interface TCLoginParam : TIMLoginParam
{
    long long _tokenTime;
}

+ (id)loadFromLocal;
@property(nonatomic) long long tokenTime; // @synthesize tokenTime=_tokenTime;
- (_Bool)isValid;
- (_Bool)isExpired;
- (void)saveToLocal;
- (id)init;

@end

