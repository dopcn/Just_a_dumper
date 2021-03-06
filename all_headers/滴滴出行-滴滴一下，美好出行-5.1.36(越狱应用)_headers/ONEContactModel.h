//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface ONEContactModel : JSONModel
{
    NSString<Optional> *_name;
    NSString<Optional> *_phone;
}

@property(copy, nonatomic) NSString<Optional> *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithEncryptDictionary:(id)arg1 error:(id *)arg2;
- (id)toEncryptDictionary;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 phoneNumber:(id)arg2;

@end

