//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseModel.h"

@class NSString;

@interface HPModuleInfo : PDBaseModel
{
    NSString *_title;
    NSString *_code;
    NSString *_summary;
    NSString *_imgUrl;
    NSString *_operationContent;
}

@property(copy, nonatomic) NSString *operationContent; // @synthesize operationContent=_operationContent;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

