//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMLWNetResponse : NSObject
{
    long long _code;
    id _data;
    NSString *_msg;
    id _originalData;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) id originalData; // @synthesize originalData=_originalData;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

