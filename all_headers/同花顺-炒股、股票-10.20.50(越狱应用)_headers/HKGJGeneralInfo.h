//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKGJGeneralInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_client_name;
    NSString *_client_ename;
    NSString *_id_no;
    NSString *_agency;
    NSString *_address;
    NSString *_email;
    NSString *_employment_status;
    NSString *_employer_business;
    NSString *_company;
    NSString *_company_address;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *company_address; // @synthesize company_address=_company_address;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *employer_business; // @synthesize employer_business=_employer_business;
@property(copy, nonatomic) NSString *employment_status; // @synthesize employment_status=_employment_status;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *agency; // @synthesize agency=_agency;
@property(copy, nonatomic) NSString *id_no; // @synthesize id_no=_id_no;
@property(copy, nonatomic) NSString *client_ename; // @synthesize client_ename=_client_ename;
@property(copy, nonatomic) NSString *client_name; // @synthesize client_name=_client_name;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

