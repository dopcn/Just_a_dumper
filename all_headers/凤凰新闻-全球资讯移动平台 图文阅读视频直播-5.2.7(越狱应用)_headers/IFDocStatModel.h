//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFStatModel.h"

@class NSString;

@interface IFDocStatModel : IFStatModel
{
    _Bool _httpSend;
    NSString *_documentId;
}

@property(retain, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
@property(nonatomic) _Bool httpSend; // @synthesize httpSend=_httpSend;
- (void).cxx_destruct;
- (void)statWithPop;
- (void)statWithRequest:(id)arg1 url:(id)arg2;

@end

