//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNJSBaseRequestModel.h"

@class NSDictionary;

@interface BNJSCompConfigRequestModel : BNJSBaseRequestModel
{
    NSDictionary *_requestData;
}

+ (id)index:(id)arg1;
@property(retain, nonatomic) NSDictionary *requestData; // @synthesize requestData=_requestData;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithRequestData:(id)arg1;

@end

